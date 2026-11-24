#include "stdio.h"
#define N 3

int super(int a[N]) {
	int    b = 0;

	for (int i = 0; i < N; ++i) {
		b += a[i];
	}

	printf("La suma es de %d\n", b);

	return 0;
}

int main() {
	int 		a[N] = {1, 2, 0};

	for (int i = 0; i < N; ++i) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	super(a);

	return 0;
}