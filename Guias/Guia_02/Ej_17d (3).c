#include "stdio.h"
#include "stdlib.h"
#define N 3
#define M 4

int main() { 

	char     	a[N][M];
	int			b[N][M];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			printf("Ingrese elemento (%d,%d):\n", i, j);
			fgets(a[i], sizeof(a), stdin);
			b[i][j] = atoi(a[i]);
			printf("El ELEMENTO ES --> %d\n", b[i][j]);
		}
	}
    return 0;
}