#include "stdio.h"
#include "stdlib.h"
#define N 4
#define X 1.0

double polyval(const int coeffs[], size_t n, double x) {
	double   	b[n];

	for (int j = 0; j < n; ++j) {
		b[j] = 0.0;
	}

	b[n - 1] = coeffs[n - 1];

	for (int i = 1; i < n; i++) {
		b[n - i - 1] = coeffs[n - i - 1] + b[n - i] * x;
	}

	return b[0];
}

int main() {
	int    	a[N];

	for (int i = 0; i < N; ++i) {
		a[N - i - 1] = rand() % 10;

		if (i < N - 2) {
			printf("%dx^%d + ", a[N - i - 1], N - i - 1);
		}
	}

	printf("%dx + %d |", a[1], a[0]);

	printf(" El polinomio evaluado en %lf es igual a %lf\n", X, polyval(a, N, X));

	return 0;
}