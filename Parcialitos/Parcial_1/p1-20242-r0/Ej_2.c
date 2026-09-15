#include "stdio.h"
#include "stdbool.h"
#define N 3

bool	es_identidad(int dim, float m[dim][dim]) {
	
	for(int i = 0; i < dim; i++) {
		for(int j = 0; j < dim; j++) {
			if(i != j && m[i][j] != 0.0) {
				return false;	
			}
			if(i == j && m[i][i] != 1.0) {
				return false;
			}
		}
	}
	return true;	
}

int main() {
	float	a[N][N];
	char	v[] = "ES LA IDENTIDAD",
		f[] = "NO ES LA IDENTIDAD";

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			a[i][j] = (i == j) ? 1.0 : 0.0;
			printf("a[%d][%d] = %f\t", i, j, a[i][j]);	
		}
		putchar('\n');
	}

	printf("%s\n", es_identidad(N, a) ? v : f);

	return 0;
}

