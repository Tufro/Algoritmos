/*Escriba un programa que lea una cadena de caracteres ingresada por el flujo de entrada estándar y la imprima por pantalla. Almacena la cadena en un arreglo de no más de 100 caracteres. Utilice los siguientes métodos:

        Itere hasta leer el carácter '\n' inclusive,

        Lea utilizando fgets().

*/
// ACA
#include "stdio.h"
#define MAX 100

int main() {
	char	c,
		buffer[MAX];
	size_t	i = 0,
		len = sizeof(buffer);
	
	printf("Escriba por favor: ");

	while((c = getchar()) != EOF && c != '\n' && i < len - 1) {
		buffer[i] = (char)c;
		i++;		
	}

	buffer[i] = '\0';
	
	for(size_t j = 0; j < i; j++) {
		putchar(buffer[j]);
	}

	putchar('\n');

	return 0;
}
