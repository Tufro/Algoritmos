#include "stdio.h"
#define N 3
#define M 2

int	**matriz_crear(size_t filas, size_t columnas) {
	float	m[filas][columnas];

	for(size_t i = 0; i < filas; i++) {
		for(size_t j = 0; j < columnas; j++) {
			m[i][j] = 0.0;
		}
	}

	for(size_t i = 0; i < filas; i++) {
		m[i][j]  = (float)i;
		for(size_t j = 0; j < columnas; j++) {
			m[i][j] += j / 10.0;
			printf("%.1f  ", m[i][j]);
		}
		putchar('\n');
	}

	return m;
}

int main() {
	
}
