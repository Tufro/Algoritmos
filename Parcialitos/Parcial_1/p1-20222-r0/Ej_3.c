#include "stdio.h"
#include "stdlib.h"
#define MAX 100

int main() {
	char	dist[MAX],
		tiem[MAX];
	int	i = 0,
		j = 0,
		d, 
		t;

	printf("Ingrese la distancia: ");

	while((d = getchar()) != '\n' && d != EOF && sizeof(dist) - 1) {
		dist[i++] = (char)d;
	}

	dist[i] = '\0';

	float	distancia = atof(dist);

	if(distancia < 0) {
		fprintf(stderr, "ERROR DISTANCIA NEGATIVA\n");
	}

	printf("Ingrese la tiempo: ");

	while((t = getchar()) != '\n' && t != EOF && sizeof(tiem) - 1) {
		tiem[j++] = (char)t;
	}
	
	tiem[j] ='\0';
	
	float	tiempo = atof(tiem);

	if(tiempo <= 0) {
		fprintf(stderr, "ERROR EN EL TIEMPO\n");
	} else {
		printf("La velocidad es de %f\n", distancia / tiempo);
	}

       return 0;	
}
