#include "stdio.h"
#define N 3
#define M 4

int main() { 

	int a[N][M] = {{5,5,5,5},{6,6,6,6},{7,7,7,7}},
		n = 5;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			a[i][j] *= n;
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
    return 0;
}

