#include "stdio.h"
#include "math.h"
#define N 4

int main() {
	int 		a[N];
	double		f[N] = {0.125, 0.375, 0.375, 0.125},
				e = 0.0,
				v = 0.0;

	for (int i = 0; i < N; ++i) {
		a[i] = i;
	}


	for (int j = 0; j < N; ++j) {
		e += a[j] * f[j];
	}

	for (int k = 0; k < N; ++k) {
		v += pow(k - e, 2) * f[k];
	}

	return printf("La esperanza es de %lf, la varianza es de %lf y la desviacion tipica es de %lf\n", e, v, sqrt(v));
}