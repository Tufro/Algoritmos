#include "stdio.h"

void left_trim(char cadena[]) {
	size_t	len = 0,
		rep = 0;

	while(cadena[rep] == ' ') {
		rep++;
	}

	while(cadena[rep] != '\0') {
		cadena[len++] = cadena[rep++];
	}

	cadena[len] = '\0';

	printf("Resultado->%s\n", cadena);
}

int main() {
	char a[] = "   hola mundo ";
	
	printf("Original->%s", a);
	left_trim(a);
	
	return 0;
}
