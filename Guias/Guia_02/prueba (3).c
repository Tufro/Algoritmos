#include "stdio.h"
#define N 3

int main() { 

	int a[N] = {1,2,3};
	int b = sizeof(a) / sizeof(a[0]);

	printf("b = %d\n", b);

 
    return 0; 
}