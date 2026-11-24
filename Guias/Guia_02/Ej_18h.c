#include "stdio.h"
#include "stdlib.h"
#define N 2
#define M 4

int super(double a[N][M]) {
	double 	max = a[0][0];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
	}
	return max;	
}

int main() { 
	double     	a[N][M];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			a[i][j] = (double)rand();
		}
	}

	printf("El maximo es %d\n", super(a));

    return 0;
}