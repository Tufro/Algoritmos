#include "stdio.h"
#define N 3
#define M 4

int main() { 

	int a[N][M];


	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			a[i][j] = 1;
			printf("%d\n", a[i][j]); 			
		}
	}
 
    return 0; 
}
