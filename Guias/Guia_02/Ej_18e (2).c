#include "stdio.h"
#define N 3
#define M 4

int main() { 
	int     a = 0,
			b = 0,
			c = 0,
			d = 0;
	double u[N][M] = {{5.0,5.0,5.0,5.0},{6.0,6.0,6.0,6.0},{7.0,7.0,7.0,7.0}};

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (u[i][j] > 0.0) {
				a++;
			} else if (u[i][j] >= 0.0) {
				b++;
			} else if (u[i][j] < 0.0) {
				c++;
			} else if (u[i][j] <= 0.0) {
				d++;
			}
		}
	}

	if (a == N * M) {
		printf("La matriz es positiva\n");
	} else if (b == N * M) {
		printf("La matriz es no negativa\n");
	} else if (c == N * M) {
		printf("La matriz es negativa\n");
	} else if (d == N * M) {
		printf("La matriz es no positiva\n");
	} 

    return 0;
}