#include "stdio.h"
#define N 3

int super(int a[N]) {
	for (int i = 0; i < N; ++i) {
		a[i] = 1;
	}

	for (int i = 0; i < N; ++i) {
		printf("super(a[%d]) = %d\n", i, a[i]);
	}

	return 0;
}

int main() {
	int 		a[N] = {1, 0, 0};

	for (int i = 0; i < N; ++i) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	super(a);

	return 0;
}