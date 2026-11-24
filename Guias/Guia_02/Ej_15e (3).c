#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#define N 4
#define M 5
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
	char c[N];
	int  a[N];
	double d[M];


	for (int j = 0; j < M; ++j) {
		d[j] = rand() / RARO;
		printf("points[%d] = %f\n", j, d[j]);
	}

	for (int i = 0; i < N; ++i) {
		printf("a[%d] = ", N - i -1);
		fgets(c, N, stdin);
		a[N - i - 1] = atoi(c);
	}

	printf("f(x) = ");

	for (int j = 0; j < N; ++j) {
		if (j < N - 2) {
			printf("%dx^%d + ", a[N - j - 1], N - j - 1);
		}
	}

	printf("%dx + %d\n", a[1], a[0]);

	polypolyval(a, N, d, M);

	return 0;
}