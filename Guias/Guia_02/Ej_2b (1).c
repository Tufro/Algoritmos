#include "stdio.h"
#define N 7

int main() {
	double 	a[N];

	for (int i = 0; i < N; ++i) {
		a[i] = 3.0;
	}


	for (int i = 0; i < N; ++i) {
		printf("a[%d] = %lf\n", i, a[i]);
	}

return 0;
}