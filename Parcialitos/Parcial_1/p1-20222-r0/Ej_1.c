#include "stdio.h"
#define N 0

void imprimir_numero(int n) {
	if(n < 0) {
		n = -n;
		putchar('-');
	}
	
	int	primer = n,
		count = 1;

	while(primer >= 10){
		count *= 10;
		primer /= 10;
	}

	while(count > 0) {
		putchar((n / count) % 10 + '0');
		count /= 10;
	}
	putchar('\n');
}

int main() {

	imprimir_numero(N);

	return 0;	
}
