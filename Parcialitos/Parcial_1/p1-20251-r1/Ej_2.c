#include <stdio.h>
#define N 3

void	intercambiar_columnas(size_t fil, size_t col,  float matriz[fil][col], size_t c1, size_t c2) {
	if(c1 >= col || c2 >= col || c1 == c2 || col < 2) return;

	for(size_t i = 0; i < fil; i++) {
		float	rep = matriz[i][c1];
		matriz[i][c1] = matriz[i][c2];
		matriz[i][c2] = rep;
	}	
}

int main() {
	float	matriz[N][N];

	printf("matriz[%d][%d]\n", N, N);

	for(size_t i = 0; i < N; i++) {
		for(size_t j = 0; j < N; j++) {
			matriz[i][j] = j;
			printf("%.2f\t", matriz[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	
	intercambiar_columnas(N, N, matriz, 1, 2);

	printf("matriz_intercambiada[%d][%d]\n", N, N);
	
	for(size_t i = 0; i < N; i++) {
		for(size_t j = 0; j < N; j++) {
			printf("%.2f\t", matriz[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
