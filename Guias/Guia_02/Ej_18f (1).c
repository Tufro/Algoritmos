#include "stdio.h"
#include "stdlib.h"
#define N 2

int main() { 

	double     	a[N][N],
				b;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			a[i][j] = (double)rand();
			printf("a[%d][%d] = %lf\n", i, j, a[i][j]);
		}
	}

	if (N == 2) {
		b = a[0][0] * a[1][1] - a[0][1] * a[1][0];
		printf("El determinante es igual a %lf\n", b);
	} else if (N == 3) {
		b = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1]- a[2][0] * a[1][1] * a[0][2] - a[2][1] * a[1][2] * a[0][0] - a[2][2] * a[1][0] * a[0][1];
		printf("El determinante es igual a %lf\n", b);	
	} else {
		printf("No es una matriz aceptable\n");
	}
    return 0;
}

