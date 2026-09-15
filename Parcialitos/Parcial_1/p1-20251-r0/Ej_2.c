#include "stdio.h"
#include "stdbool.h"
#define N 3
#define M 4

bool	es_suma(int fil, int col, float a[fil][col]) {
	float	b[fil][col];

	for(int k = 0; k < col; k++) {
		b[0][k] = a[0][k] +  a[0][k - 1];
	}

	for(int i = 1; i < fil; i++) {
		for(int j = 1; j < col; j++) {
			b[i][j] = a[i][j] +  a[i][j - 1];
			if(b[i][j] != b[i - 1][j]) {
				return false;
			}
		}
	}

	return true;
}
	
int main() {
	float	m[N][M];
	char	v[] = "Suman los mismo",
		f[] = "No suman lo mismo";

	printf("%d filas y %d columnas\n", N, M);

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			m[i][j] = 1.0;
			printf("m[%d][%d] = %.2f\t", i, j,  m[i][j]);
		}
		putchar('\n');
	}

	printf("%s\n", es_suma(N, M, m) ? v : f);

	return 0;
}
