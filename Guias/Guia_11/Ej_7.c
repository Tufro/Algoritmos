// Escribir un programa que utilice una máscara para invertir los bits de determinadas posiciones.

#include "stdio.h"
#include "stdint.h"

int main() {
	uint8_t	a = 0xF0;
	int	c;

	printf("a = ");

	for(int i = 7; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
		if(i % 4 == 0) putchar(' ');
	}	
	putchar('\n');

	printf("Cambiar posicion: ");

	while((c = getchar()) != EOF && c != '\n') {
		if(c >= '0' && c < '9') {
			int pos = c - '0';
			a ^= (uint8_t)(1 << pos);
		} else {
			fprintf(stderr, "Error en la posicion\n");
			break;	
		};
	}
	
	printf("a = ");

	for(int i = 7; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
		if(i % 4 == 0) putchar(' ');
	}	
	putchar('\n');

	return 0;
}
