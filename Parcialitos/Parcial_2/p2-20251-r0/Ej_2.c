#include <stdio.h>
#include <stdlib.h>

struct alumno {
	int	padron;
	char	*nombre;	
};

typedef struct alumno alumno_t;

alumno_t  *clonar_alumno(const alumno_t *a) {
	if(!a) return NULL;

	alumno_t  *clon = malloc(sizeof(alumno_t));

	if(!clon) return NULL;

	clon->padron = a->padron;

	size_t	len_n = 0;

	while(a->nombre[len_n] != '\0') len_n++;

	clon->nombre = malloc((len_n + 1) * sizeof(char));

	if(!clon->nombre) {
		free(clon);
		return NULL;
	}

	for(size_t i = 0; i < len_n; i++) {
		clon->nombre[i] = a->nombre[i];
	}

	clon->nombre[len_n] = '\0';	

	return clon;	
}

int main() {
	alumno_t	*p = malloc(sizeof(alumno_t));
	if(!p) return 1;
	p->padron = 98704;
	p->nombre = "Santiago";	

	alumno_t	*c = clonar_alumno(p);
	if(!c) return 1;
	
	printf("Padron:%d\tNombre:%s\n", p->padron, p->nombre);	
	printf("Padron:%d\tNombre:%s\n", c->padron, c->nombre);	
	
	return 0;
}
