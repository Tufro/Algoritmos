#include <stdio.h>

int  cuentita(int k) {
	return k - k % 10;
}

int main() {
	int	k = 153;	

	printf("%d -> %d\n", k, cuentita(k));
	
	return 0;
}
