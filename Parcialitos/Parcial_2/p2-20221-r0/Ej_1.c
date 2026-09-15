#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"

bool	verificar_paridad(uint8_t dato) {
	int	count = 0;
	bool	par = (dato >> 7) & 1;
	uint8_t	valor = dato & 0x7f; 

	for(int i = 0; i < 7; i++) {
		if((valor >> i) & 1) {
			count++;
		} 	
	}

	bool par_esp = (count % 2) ? false : true;

	return par != par_esp;
}

int main() {
	uint8_t x = 0xF0;
	char	v[] = "Es par",
		f[] = "No es par";

	printf("%s el ", verificar_paridad(x) ? v : f);

	printf("x = ");

	for(int j = 7; j >= 0; j--) {
		printf("%d", (x >> j) & 1);
	}

	putchar('\n');

	return 0;
}
