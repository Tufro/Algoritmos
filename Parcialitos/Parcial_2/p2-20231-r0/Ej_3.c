#include "stdio.h"
#include "stdlib.h"

int  *leer_notas(size_t *n) {
	char	linea[100];
	int	*notas = NULL;

	*n = 0;
	
	while(fgets(linea, sizeof(linea) , stdin) ) {
		int	valor = 0,
			i = 0;

		while(linea[i] >= '0' && linea[i] <= '9') {
			valor = valor * 10 + (linea[i] - '0');
			i++;
		}

		if(valor >= 0 && valor <= 100) {
			int *tmp = realloc(notas, (*n + 1) * sizeof(int));
			if(!tmp) {
				free(notas);
				return NULL;
			}
			notas = tmp;
			notas[*n] = valor;
			(*n)++;
		}
	}
	
	return notas;
}

int main() {
	size_t	cantidad;

	printf("Escriba las notas: ");

	int	*notas = leer_notas(&cantidad);

	if(!notas) {
		fprintf(stderr, "Error al leer\n");
		return 1;
	}

	printf("Se leyeron %zu notas:\n", cantidad);
	for(size_t i = 0; i < cantidad; i++) {
		printf("Nota[%zu] = %d\n", i, notas[i]);
	}

	free(notas);	
	return 0;
}
