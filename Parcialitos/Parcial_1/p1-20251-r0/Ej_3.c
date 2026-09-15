#include <stdio.h>
#include <stdlib.h>

int main() {
	char	buffer[128];
	int	num;

	printf("Ingrese la cotizacion: $");

	if(!fgets(buffer, sizeof(buffer), stdin)) return 1;
		num = atoi(buffer);

	if(num >= 1000 && num <= 1200) {
		printf("Le conviene comprar\n");
	} else if(num > 1200 && num <= 1400) {
		printf("Le conviene vender\n");
	} else {
		fprintf(stderr, "El valor ingresado no se encuentra en el rango\n");
	}	

	return 0;
}
