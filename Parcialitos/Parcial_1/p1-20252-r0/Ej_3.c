#include <stdio.h>
#include <stdlib.h>

int main() {
	char	buffer[128];
	float	numero;

	printf("Ingrese: ");
	
	if(!fgets(buffer, sizeof(buffer), stdin)) return 1;
		numero = (float)atof(buffer);
	
	if(0 <= numero && numero <= 30) {
		printf("Compra\n");	
	} else if(numero > 30) {
		printf("Vende\n");	
	} else {
		fprintf(stderr, "Error al ingresar\n");
	}	

	return 0;
}
