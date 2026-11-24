#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(void) {
    	float	suma = 0.0;
    	size_t	n = 0;

	printf("Ingrese valores positivos hasta cansarse\n");

    	char	aux[MAX];
    	while(fgets(aux, sizeof(aux), stdin) != NULL) {
        	float valor = strtof(aux, NULL);

        	if(valor < 0) {
            		fprintf(stderr, "Valor incorrecto\n");
            		return 1;
        	}
        	suma += valor;
        	n++;
    	}
	
	printf("El promedio es %.2f\n", suma / n);

	return 0;
}
