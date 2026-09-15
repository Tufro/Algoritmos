#include "stdio.h"
#include "stdbool.h"
#define N 3
#define M 2

bool	es_suma(int fil, int col, float a[fil][col]) {
	for(int i = 1; i < fil; i++) {
		for(int j = 1; j < col; j++) {
			if(a[i][j] != a[i - 1][j] + a[i][j - 1]) {
				return false;
			}
		}
	}

	return true;
}

int main() {
	float	m[N][N];
	char	v[] = "Es lo que se pide",
		f[] = "No es lo que se pide";

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			m[i][j] = 0.0;
		}
	}

	printf("%s\n", es_suma(N, N, m) ? v : f);

	return 0;
}

