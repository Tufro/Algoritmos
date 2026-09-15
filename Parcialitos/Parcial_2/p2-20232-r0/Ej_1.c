#include "stdio.h"
#include "stdint.h"
#include "stdbool.h"

bool misma_cantidad(uint32_t n) {
	int	par = 0,
		impar = 0;

	for(int i = 31; i >= 0; i--) {
		if(i % 2) {	
			impar += ((n >> i) & 1);	
		} else { 
			par += ((n >> i) & 1);	
		}
	}	

	return par == impar;
}

int main() {
	uint32_t	a = 75;	

	printf("a = 0b");
	for(int j = 7; j >= 0; j--) {
		printf("%d", (a >> j) & 1);
	}

	printf(" %s\n", misma_cantidad(a) ? "misma cantidad" : "no tienen la misma cantidad");
	
	return 0;
}
