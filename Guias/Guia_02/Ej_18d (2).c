#include "stdio.h"
#define N 3
#define M 4

int main() { 

	int a[N][M] = {{5,5,5,5},{6,6,6,6},{7,7,7,7}},
		b[M][N];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			b[i][j] = a[j][i];
			printf("b[%d][%d] = %d ---- a[%d][%d] = %d\n", i, j, b[i][j], i, j, a[i][j]);
		}
	}
    return 0;
}

