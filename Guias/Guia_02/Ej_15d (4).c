#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#define N 4
#define M 7
#define RARO 100000.0

void polypolyval(const int coeffs[], int n, const double points[], int m) {
	double		b[M];

	for (int k = 0; k < M; ++k) {
		b[k] = 0.0;
	}

	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			b[i] += coeffs[j] * pow(points[i], j);
		}
		printf("f(%lf) = %lf\n", points[i], b[i]);
	}
}

int main() {
	int    	a[N];
	double b[M];

	srand(time(NULL)); 

	for (int j = 0; j < M; ++j) {
		b[j] = rand() / RARO;
		printf("points[%d] = %f\n", j, b[j]);
	}

	printf("f(x) = ");

	for (int i = 0; i < N; ++i) {
		a[N - i - 1] = rand() % 10;

		if (i < N - 2) {
			printf("%dx^%d + ", a[N - i - 1], N - i - 1);
		}
	}

	printf("%dx + %d\n", a[1], a[0]);

	polypolyval(a, N, b, M);

	return 0;
}