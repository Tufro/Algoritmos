#include <stdio.h>
#define N 3
#define M 2

float	suma(size_t fil, size_t col, float  matriz[fil][col]) {
	float	suma = 0.0;
	
	for(size_t i = 0; i < fil; i++) {
		for(size_t j = 0; j < col; j++) {
			if(matriz[i][j] > 0.0) 
				suma += matriz[i][j];
			
		}
	}
	return suma;
}

int main() {
	float	a[N][M];

	printf("matriz[%d][%d]\n", N, M);
	for(size_t i = 0; i < N; i++) {
		for(size_t j = 0; j < M; j++) {
			a[i][j] = (float)j;
			printf("%.2f ", a[i][j]);
		}
		putchar('\n');
	}	

	printf("La suma de los elementos positivos es de ");
	printf("%.2f\n", suma(N, M, a));

	return 0;
}
