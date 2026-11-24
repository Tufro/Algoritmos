#include "stdio.h"
#include "stdlib.h"
#define N 3
#define M 4

int main() { 

	int     	a[N][M];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			a[i][j] = rand();
			printf("El ELEMENTO ES (%d, %d)--> %d\n", i, j, a[i][j]);
		}
	}
    return 0;
}