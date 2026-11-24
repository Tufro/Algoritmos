#include "stdio.h"
#define N 6

int super(double a[N]) {
	double 	min = a[0];

	for (int i = 0; i < N; ++i) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return printf("%lf\n", min);
}

int main() {
	double 		a[N] = {-2.0, 2.0, 8.0, 4.0, 1.0, -5.0};

	for (int i = 0; i < N; ++i) {
		printf("a[%d] = %lf\n", i, a[i]);
	}

	super(a);

	return 0;
}