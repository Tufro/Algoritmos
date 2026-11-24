#include "stdio.h"
#define N 3

int super(double a[N]) {
	double   b = 0;

	for (int i = 0; i < N; ++i) {
		b += i * a[i] / N;
	}

	printf("La media es de %lf\n", b);
	

	return 0;
}

int main() {
	double 		a[N] = {1.0, 2.0, 0.0};

	for (int i = 0; i < N; ++i) {
		printf("a[%d] = %lf\n", i, a[i]);
	}

	super(a);

	return 0;
}