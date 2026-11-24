#include "stdio.h"
#define N 6

int super(double a[N]) {
	double   	e = 0.0,
				v = 0.0,
				prob = 1 / (double)N;	

	for (int i = 0; i < N; ++i) {
		e += a[i] * prob;
		printf("a[%d] = %lf p(x) =%lf\n", i, a[i], a[i] / N);
	}

	for (int k = 0; k < N; ++k) {
		v += (a[k] - e) * (a[k] - e);
	}
	
	return printf("La varianza es de %lf\n", v * prob);
}

int main() {
	double 		a[N] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};

	for (int i = 0; i < N; ++i) {
		printf("P[%d] = %lf\n", i, a[i] / N);
	}

	super(a);

	return 0;
}