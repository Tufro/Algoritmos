#include "stdio.h"
#define N 3

int main() { 

	int     	a[N][N] = {{1,2,3},{4,5,6},{7,8,9}},
				n = 0;

	for (int i = 0; i < N; ++i) {
		n += a[i][i];
	}

	printf("La traza es igual a %d\n", n);

    return 0;
}