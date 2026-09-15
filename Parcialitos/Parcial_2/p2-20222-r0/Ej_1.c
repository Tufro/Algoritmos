#include "stdio.h"
#include "stdint.h"

struct tiempo {
	int	dia,
		mes,
		anio;
}

typedef unint32_t tiempo_t;

typedef struct {
	int	dia,
		mes,
		anio;
} sstiempo_t;

void tiempo_a_sttiempo(tiempo_t t, sttiempo *st) {
	st->dia = t & 0x1F;
	st->mes = (t >> 5) & 0x0F;
	st->anio = (t >> 9) & 0x0FFF;

	int signo = (t >> 14) & 0x01;
	if (signo) st->anio = -st->anio;	
}

int main() {
	tiempo_t fecha = 0;

	fecha |= 23;
	fecha |= (8 << 5);
	fecha |= (2022 << 9);
	fecha |= (0 << 14);

	printf("0b");

	for(int i = 32; i >= 0; i--) {
		printf("%d", (fecha >> i) & 1); 
	}
	
	putchar('\n');

	return 0;
}

