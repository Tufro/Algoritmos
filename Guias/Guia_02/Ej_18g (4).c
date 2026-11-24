#include "stdio.h"
#include "stdlib.h"
#define N 4
#define K 2
#define M 2
#define G 4

int main() { 

	double     	a[N][K],
				b[M][G];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < K; ++j) {
			a[i][j] = i;
		}
	}

	for (int m = 0; m < M; ++m) {
		for (int n = 0; n < G; ++n) {
			b[m][n] = n;
		}
	}	

	if (K == M && G != N) {
		int c[N][G];

		for (int r = 0; r < N; ++r) {
			for (int s = 0; s < G; ++s) {
				c[r][s] = 0;			
			}
		}

		for (int k = 0; k < N; ++k) {
			for (int l = 0; l < G; ++l) {
				c[k][l] += a[k][l] * b[l][k];
				printf("c[%d][%d] = %d\n", k, l, c[k][l]);
			}
		}
	} else if (G == N && K != M) {
		int c[M][K];

		for (int y = 0; y < M; ++y) {
			for (int z = 0; z < K; ++z) {
				c[y][z] = 0;			
			}
		}

		for (int p = 0; p < M; ++p) {
			for (int q = 0; q < K; ++q) {
				c[p][q] += a[p][q] * b[q][p];
				printf("c[%d][%d] = %d\n", p, q, c[p][q]);
			}
		}
	} else if (G == N && K == M) {
		int c[N][G];

		for (int y = 0; y < N; ++y) {
			for (int z = 0; z < G; ++z) {
				c[y][z] = 0;			
			}
		}

		for (int p = 0; p < N; ++p) {
			for (int q = 0; q < G; ++q) {
				c[p][q] += a[p][q] * b[q][p];
				printf("c[%d][%d] = %d\n", p, q, c[p][q]);
			}
		}		
	} else {
		printf("Las matrices no son compatibles\n");
	}
    return 0;
}
