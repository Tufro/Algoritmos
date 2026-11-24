#include "stdio.h"
#include "stdbool.h" 
#include "stdlib.h"
#define N 40
#define A 3

int busqueda(const int v[], size_t n, int objetivo) {

	int   j = 0;
	bool  b = 0;

    while(j != n + 1) {
    	if (v[j] == A) {
    		b = 1;
    		break;
    	} else if (j == n) {
    		break;
    	} else {
    		j++;
    	}
    }

    return printf("%d\n", b);
}

int main() { 

	int     	a[N];

	for (int i = 0; i < N; ++i) {
		a[i] = rand() % 10;
	}

	busqueda(a, N, A);

    return 0;
}