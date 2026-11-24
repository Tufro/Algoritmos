#include "stdio.h"
#define C "130"

unsigned int	mi_atoi(const char s[]) {
	size_t	len = 0;
	unsigned int	numero = 0;

	while(s[len] != '\0') len++;

	for(size_t i = 0; i < len; i++) {
		numero = numero * 10 + s[i] - '0';
	}

	return numero;
}

int main() {
	printf("\"%s\" se escribe como %u\n", C, mi_atoi(C));

	return 0;
}
