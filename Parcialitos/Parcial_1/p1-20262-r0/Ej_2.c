#include <stdio.h>
#include <stdbool.h>
#define N 3

bool	balanceada(size_t dim, float matriz[dim][dim]) {
	float	inf = 0.0,
		sup = 0.0;
	
	for(size_t i = 0; i < dim; i++) {
		for(size_t j = 0; j < dim; j++) {
			if(i < j) {
				inf += matriz[i][j];
			} else if(i > j) {
				sup += matriz[i][j];
			}
		}
	}
	return inf == sup;
}

int main() {
	float	a[N][N];	
	char	v[] = "La matriz esta balanceada",
		f[] = "La matriz no esta balanceada";
	
	printf("matriz[%d][%d]\n", N, N);
	for(size_t i = 0; i < N; i++) {
		for(size_t j = 0; j < N; j++) {
			a[i][j] = i * j;
			printf("%.2f ", a[i][j]);
		}
		putchar('\n');
	}

	printf("%s\n", balanceada(N, a) ? v : f);
	return 0;
}

