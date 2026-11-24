#include "stdio.h"
#define N 15

int main() {
	int 	a[N];

	for (int i = 0; i < N; ++i) {
		a[i] = 0;
		printf("a[%d] = %d\n", i, a[i]);
	}

return 0;
}