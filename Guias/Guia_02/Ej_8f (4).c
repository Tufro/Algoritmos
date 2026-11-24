#include "stdio.h"
#define N 6

int super(double a[N]) {
	double 	max = a[0];

	for (int i = 0; i < N; ++i) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return printf("%lf\n", max);
}

int main() {
	double 		a[N] = {1.0, 2.0, 8.0, 4.0, 6.0, 5.0};

	for (int i = 0; i < N; ++i) {
		printf("a[%d] = %lf\n", i, a[i]);
	}

	super(a);

	return 0;
}