#include "stdio.h"
#include "stdbool.h"
#define N 3

int main() { 

	int a[N] = {1,2,3},
		b[N] = {1,2,3};

	bool c;

	for (int i = 0; i < N; ++i) {
		if (a[i] == b[i]) {
			c = 1;
			return printf("El valor es %d\n", c);
		} else {
			c = 0;
			return printf("El valor es %d\n", c);
		}
	}
}