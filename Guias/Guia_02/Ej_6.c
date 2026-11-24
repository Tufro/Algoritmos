#include "stdio.h"
#include "stdlib.h"
#define N 10000

int super(int b) {
	int 	a[b],
			c[b], 
			d[b]; 

	for (int i = 0; i < b; i++) {
		a[i] = rand() % 10;
	}

	for (int k = 0; k < b; k++) {
		c[k] = 0;
	}

	for (int j = 0; j < b; j++) {
		switch(a[j]) {
		    case 0:
		        c[0]++;
		        break;
		    case 1:
		        c[1]++;
		        break;
		    case 2:
		        c[2]++;
		        break;
		    case 3:
		        c[3]++;
		        break;
		    case 4:
		        c[4]++;
		        break;
		    case 5:
		        c[5]++;
		        break;
		    case 6:
		        c[6]++;
		        break;
		    case 7:
		        c[7]++;
		        break;
		    case 8:
		        c[8]++;
		        break;
		    case 9:
		        c[9]++;
		        break;
	    }
	}

	for (int o = 0; o < 10; ++o) {
		d[o] = c[o] / 100;
	}

	printf("   Elemento\tValor\tHistograma\n");

	for (int l = 0; l < 10; l++) {
		printf("\t%ds:\t%d\t", l, c[l]);
		for (int m = 0; m < d[l]; ++m) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int main() {
	return super(N);
}