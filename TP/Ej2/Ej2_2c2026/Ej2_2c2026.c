#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	float	x, y;
} vector_t;

typedef struct {
	vector_t *coordenadas;
	size_t  n;

	vector_t  cm;
	double	a;
	vector_t *cs;
	
	float  radio;
} poligono_t;

float	vector_producto_escalar(vector_t  a, vector_t  b) {
	return a.x * b.x + a.y * b.y;
}

float	vector_producto_vectorial(vector_t a, vector_t b) {
	return a.x * b.y - a.y * b.x;
}

vector_t  vector_restar(vector_t  a, vector_t  b) {
	vector_t	c;

	c.x = a.x - b.x;
	c.y = a.y - b.y;

	return c;
}

vector_t  vector_perpendicular(vector_t  a) {
	vector_t  b;
	
	b.x = -a.y;
	b.y = a.x;

	return b;
}

float	vector_norma(vector_t a) {
	return sqrt(a.x * a.x + a.y * a.y);
}

void	vector_trasladar(vector_t  v[], size_t n, vector_t t) {
	for(size_t i = 0; i < n; i++) {
		v[i].x += t.x;
		v[i].y += t.y;
	}
}

void vector_rotar(vector_t  v[], size_t n, double a) {
	double	coseno = cos(a),
		seno = sin(a);

	for(size_t i = 0; i < n; i++) {
		float	x = v[i].x,
			y = v[i].y;
		
		v[i].x = x * coseno - y * seno;
		v[i].y = x * seno + y * coseno;
	}

}

vector_t   vector_centro_masa(const vector_t v[], size_t n) {
	float	temp,
		area = 0.0f;
	vector_t  cm = {0.0f, 0.0f};

	for(size_t i = 0; i < n; i++) {
		temp = vector_producto_vectorial(v[i], v[(i + 1) % n]);
		area += temp;
		cm.x += (v[i].x + v[(i + 1) % n].x) * temp;
		cm.y += (v[i].y + v[(i + 1) % n].y) * temp;
	}

	cm.x /= 3.0f * area;
	cm.y /= 3.0f * area;

	return cm;
}

poligono_t  *poligono_crear(const vector_t coordenadas[], size_t n) {
	if(!coordenadas || n < 3) return NULL;
	
	poligono_t  *p = malloc(sizeof(poligono_t));
	if(!p) return NULL;

	p->coordenadas = malloc(n * sizeof(vector_t));
	p->n = n;
	p->cm.x = 0.0f;
	p->cm.y = 0.0f;
	p->a = 0.0f;
	p->cs = malloc(n * sizeof(vector_t));
	p->radio = 0.0f;
	
	if(!p->coordenadas || !p->cs) {
		free(p->coordenadas);
		free(p->cs);
		free(p);
		return NULL;
	}

	vector_t  centro = vector_centro_masa(coordenadas, n);

	for(size_t i = 0; i < n; i++) {
		p->coordenadas[i].x = coordenadas[i].x - centro.x;
		p->coordenadas[i].y = coordenadas[i].y - centro.y;
		p->cs[i] = p->coordenadas[i];
		
		float	norma = vector_norma(p->coordenadas[i]);

		if(norma > p->radio) {
			p->radio = norma;
		}
	}

	return p;
}

void	poligono_destruir(poligono_t *poligono) {
	if(!poligono) return;	
	free(poligono->coordenadas);
	free(poligono->cs);
	free(poligono);
}

poligono_t  *poligono_clonar(const poligono_t *poligono) {
	if(!poligono) return NULL;

	poligono_t *copia = malloc(sizeof(poligono_t));
	if(!copia) return NULL;
	
	copia->coordenadas = malloc(poligono->n * sizeof(vector_t));
	copia->cs = malloc(poligono->n * sizeof(vector_t));

	if(!copia->coordenadas || !copia->cs) {
		free(copia->coordenadas);
		free(copia->cs);
		free(copia);
		return NULL;
	}

	size_t	tamanio = poligono->n * sizeof(vector_t);
	
	memcpy(copia->coordenadas, poligono->coordenadas, tamanio);
	memcpy(copia->cs, poligono->cs, tamanio);
	
	copia->n = poligono->n;
	copia->cm = poligono->cm;
	copia->a = poligono->a;
	copia->radio = poligono->radio;
	
	return copia;
}

size_t	poligono_get_largo(const poligono_t *poligono) {
	return poligono->n;
}

vector_t  poligono_get_coordenada(const poligono_t *poligono, size_t i) {
	return	poligono->cs[i];
}

vector_t  poligono_get_cm(const poligono_t *poligono) {
	return poligono->cm;
}

double  poligono_get_a(const  poligono_t *poligono) {
	return poligono->a;
}

void	poligono_transformacion(const poligono_t *poligono, vector_t *cm, double *a) {
	*cm = poligono->cm;
	*a = poligono->a;
}

void	poligono_set_cm(poligono_t  *poligono, vector_t cm) {
	poligono->cm = cm;

	for(size_t i = 0; i < poligono->n; i++) 
		poligono->cs[i] = poligono->coordenadas[i];

	vector_rotar(poligono->cs, poligono->n, poligono->a);
	vector_trasladar(poligono->cs, poligono->n, cm);
}

void	poligono_set_a(poligono_t  *poligono, double a) {
	poligono->a = a;

	for(size_t i = 0; i < poligono->n; i++)
		poligono->cs[i] = poligono->coordenadas[i];
	
	vector_rotar(poligono->cs, poligono->n, a);
	vector_trasladar(poligono->cs, poligono->n, poligono->cm);
}

void	poligono_transformar(poligono_t *poligono, vector_t cm, double a) {	
	poligono_set_cm(poligono, cm);
	poligono_set_a(poligono, a);
}

bool	poligono_hay_interseccion(const poligono_t *a, const poligono_t *b) {
	if(vector_norma(vector_restar(a->cm, b->cm)) > a->radio + b->radio) {
		return false;
	}

	float		min_a,	max_a, min_b, max_b, proy;

	for(size_t i = 0; i < a->n; i++) {
		vector_t	aa = poligono_get_coordenada(a, (i + 1) % a->n),
			 	bb = poligono_get_coordenada(a, i),
				
				segmento = vector_restar(aa, bb),

			  	eje = vector_perpendicular(segmento);

		proy = vector_producto_escalar(poligono_get_coordenada(a, 0), eje);
		min_a = max_a = proy;

		for(size_t j = 1; j < a->n; j++) {
			proy = vector_producto_escalar(poligono_get_coordenada(a, j), eje);
			if(proy < min_a)
				min_a = proy;

			if(proy > max_a)
				max_a = proy;
		}

		proy = vector_producto_escalar(poligono_get_coordenada(b, 0), eje);
		min_b = max_b = proy;
		
		for(size_t  k = 1; k < b->n; k++) {		
			proy = vector_producto_escalar(poligono_get_coordenada(b, k), eje);
			if(proy < min_b) 
				min_b = proy;

			if(proy > max_b)
				max_b = proy;
		}	
	

		if(max_a < min_b || max_b < min_a)
			return	false;
	}

	for(size_t i = 0; i < b->n; i++) {
		vector_t aa = poligono_get_coordenada(b, (i + 1) % b->n);
		vector_t bb = poligono_get_coordenada(b, i);
		vector_t segmento = vector_restar(aa, bb);
		vector_t eje = vector_perpendicular(segmento);

		proy = vector_producto_escalar(poligono_get_coordenada(a, 0), eje);
		min_a = max_a = proy;

		for(size_t j = 1; j < a->n; j++) {
			proy = vector_producto_escalar(poligono_get_coordenada(a, j), eje);

			if(proy < min_a)
				min_a = proy;

			if(proy > max_a)
				max_a = proy;
		}

		proy = vector_producto_escalar(poligono_get_coordenada(b, 0), eje);
		min_b = max_b = proy;

		for(size_t k = 1; k < b->n; k++) {
			proy = vector_producto_escalar(poligono_get_coordenada(b, k), eje);

			if(proy < min_b)
				min_b = proy;

			if(proy > max_b)
				max_b = proy;
		}

		if(max_a < min_b || max_b < min_a)
			return false;
	}

	return true;
}

int main() {
	char	buffer[128];
	bool	primero = true,
		r;
	poligono_t	*ex = NULL,
			*actual = NULL;
	
	while(fgets(buffer, sizeof(buffer), stdin)) {
		int	n = atoi(buffer);
		if(n < 3) {
			poligono_destruir(ex);
			return 1;
		}

		vector_t   cm,
			   *coordenadas = malloc(n * sizeof(vector_t));
		if(!coordenadas) {
			poligono_destruir(ex);
			return 1;
		}
		for(size_t i = 0; i < n + 1; i++) {
			if(!fgets(buffer, sizeof(buffer), stdin)) {
				free(coordenadas);
				poligono_destruir(ex);
				return 1;
			}

			size_t	j = 0;

			while(buffer[j] != ' ') j++;

			buffer[j] = '\0';
			
			if(i < n) {
				coordenadas[i].x = atof(buffer);
				coordenadas[i].y = atof(buffer + j +1);
			} else {
				cm.x = atof(buffer);
				cm.y = atof(buffer + j + 1);
			}
		}
	
		if(!fgets(buffer, sizeof(buffer), stdin)) {
			free(coordenadas);
			poligono_destruir(ex);
			return 1;
		}

		double a = atof(buffer);
	
		actual = poligono_crear(coordenadas, n);
		
		free(coordenadas);
		
		if(!actual) {
			poligono_destruir(ex);
			return 1;
		}		

		poligono_transformar(actual, cm, a);
	
		
		if(!primero) {
			if(!fgets(buffer, sizeof(buffer), stdin)) {
				poligono_destruir(ex);
				poligono_destruir(actual);
				return 1;	
			}
						
			r = poligono_hay_interseccion(ex, actual);

			if(buffer[0] == 'S' && !r) {
				printf("Error\n");
				poligono_destruir(ex);
				poligono_destruir(actual);
				return 1;
			} else if (buffer[0] == 'N' && r) {
				printf("Error\n");
				poligono_destruir(ex);
				poligono_destruir(actual);
				return 1;
			}
			poligono_destruir(ex);
		}
		
		ex = actual;	
		primero = false;
	}
	
	poligono_destruir(ex);

	return 0;
}
