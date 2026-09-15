#include "stdio.h"
#include "stdbool.h"
#define N 3

bool	es_triangular_superior(int dim, float  matriz[dim][dim]) {
	for(int i = 0; i < dim; i++) {
		for(int j = 0; j < dim; j++) {
			if(i < j && matriz[i][j] != 0.0) {
				return false;
			}
		}
	}
	
	return true;	
}

int main() {
	float	a[N][N];
	char	v[] = "Es superior triangular",
	       	f[] = "No es superior triangular"; 	

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			a[i][j] = 0.0;
		}
	}

	printf("%s\n", (es_triangular_superior(N, a)) ? v : f);

	return 0;
}
