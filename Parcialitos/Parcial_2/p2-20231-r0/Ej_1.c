#include "stdio.h"
#include "stdint.h"

int bcd_a_numero(uint32_t  bcd) {
	int	numero = 0;

	for(int i = 7; i >= 0; i--) {
		uint32_t digito = (bcd >> (i * 4)) & 0x0F;
		numero = numero * 10 + digito;
	}

	return numero;
}

int main() {
	uint32_t	x = 0x12345678;

	printf("x = 0x%x\nx =", x);

	for(int i = 31; i >= 0; i--) {
		if((i + 1) % 4) {
			printf("%d", (x >> i) & 1);
		} else {
			printf(" %d", (x >> i) & 1);
		}
	}
	putchar('\n');

	return 0;
}
