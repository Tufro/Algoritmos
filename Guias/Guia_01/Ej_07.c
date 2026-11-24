#include <stdio.h>

int  paridad(int k) {
	return k % 2 ? 1 : 0;
}

int main() {
	int	k = 0;	
	
	printf("%d es %s\n", k, paridad(k) ? "impar" : "par");

	return 0;
}
