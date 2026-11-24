#include "stdio.h"
#define N 3
#define M 4

int main() { 

	int     	a[N][M];

	a[0][0] = 0,
	a[0][1] = 1;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			a[i][j + 2] = a[i][j + 1] + a[i][j];
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}		
	}

    return 0;
}