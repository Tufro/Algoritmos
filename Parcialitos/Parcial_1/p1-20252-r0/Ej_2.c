#include <stdio.h>
#include <stdbool.h>
#define N 3
#define M 4

bool	suman(size_t fil, size_t col, float a[fil][col]) {
	float	b[col];

	for(size_t k = 0; k < col; k++) b[k] = 0.0;

	for(size_t j = 0; j < col; j++) {
		for(size_t i = 0; i < fil; i++) {
			b[j] += a[i][j];
		}
		if(b[0] != b[j]) return false;
	}
	return true;
}

int main() {
	char	v[] = "Suman las columnas",
		f[] = "No suman las columnas";

	float	a[N][M];

	printf("matriz[%d][%d]\n", N, M);
	for(size_t i = 0; i < N; i++) {
		for(size_t j = 0; j < M; j++) {
			a[i][j] = (float)j;
			printf("%.2f ", a[i][j]);
		}
		putchar('\n');
	}

	printf("\"%s\"\n", suman(N, M, a)  ? v : f);

	return 0;
}
