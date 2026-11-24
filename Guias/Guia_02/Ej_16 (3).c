#include "stdio.h"
#define N 3
#define M 4

int main() { 

	int a[N][M] = {{5,5,5,5},{6,6,6,6},{7,7,7,7}};


	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			printf("%d\n", a[i][j]); 			
		}
	}
 
    return 0; 
}
