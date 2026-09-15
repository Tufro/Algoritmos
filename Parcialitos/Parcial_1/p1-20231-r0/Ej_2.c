#include "stdio.h"
#include "stdbool.h"
#define N 3

bool	es_simetrica(int dim, float matriz[dim][dim]) {
	for(int i = 0; i < dim; i++) {
		for(int j = 0; j < dim; j++) {
			if(i != j && matriz[i][j] != matriz[j][i]) {
				return false;
			}
		}
	}

	return true;
}

int main() {
	float	a[N][N];

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			a[i][j] = 0.0;
		}
	}
	
 	a[1][0] = 1.0;

	printf("%s\n", (es_simetrica(N, a)) ? "Verdadero" : "Falso");

	return 0;
}
