#include "stdio.h"
#include "stdlib.h"
#define N 4
#define X 1.0

void polyder(const int coeffs[], size_t n, double x) {
	int         c[N - 1];

	printf("f'(x) = ");

	for (int j = 1; j < N; ++j) {
		c[N - j - 1] = coeffs[N - j];

		if (j < N - 2) {
			printf("%dx^%d + ", (N - j) * c[N - j - 1], N - j - 1);
		}
	}

	printf("%dx + %d \n", 2 * c[1], c[0]);
}

int main() {
	int    	a[N];

	printf("f(x) = ");

	for (int i = 0; i < N; ++i) {
		a[N - i - 1] = rand(10) % 10;

		if (i < N - 2) {
			printf("%dx^%d + ", a[N - i - 1], N - i - 1);
		}
	}

	printf("%dx + %d\n", a[1], a[0]);

	polyder(a, N, X);

	return 0;
}