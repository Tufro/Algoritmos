#include "stdio.h"
#include "stdlib.h"
#define N 40
#define A 2

void busqueda_lineal(const int v[], size_t n, int objetivo) {

	int   j = 0;

    while(j != n + 1) {
    	if (v[j] == A) {
    		printf("v[%d] = %d\n", j, v[j]);
			break;
    	} else if (j == n) {
    		printf("No esta\n");
			break;
    	} else {
    		j++;
    	}
    }
}

int main() { 

	int     	a[N];

	for (int i = 0; i < N; ++i) {
		a[i] = rand() % 10;
	}

	busqueda_lineal(a, N, A);

    return 0;
}