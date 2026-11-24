#include <stdio.h>
#include <stdlib.h>

int main() {
	char	buffer[128];
	float	base,
		altura;

	printf("Ingrese la base: ");

	if(!fgets(buffer, sizeof(buffer), stdin)) return 1;
		base = strtof(buffer, NULL);

	printf("Ingrese la altura: ");

	if(!fgets(buffer, sizeof(buffer), stdin)) return 1;
		altura = strtof(buffer, NULL);

	if(base < 0.0 || altura < 0.0) {
		fprintf(stderr, "Error al ingresar\n");
	} else {
		printf("El area es de %.2f\n", base * altura);
	}
	
	return 0;
}
