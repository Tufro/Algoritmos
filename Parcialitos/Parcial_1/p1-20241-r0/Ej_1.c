#include <stdio.h>

void	centrar(char cadena[], size_t largo) {
	size_t	len = 0;

	while(cadena[len] != '\0') len++;
	
	if(largo < len) {
		fprintf(stderr, "Longuitud invalida\n");
		return;
	}	
	
	char	rep[len];
	size_t	izq = (largo - len) / 2,
		der = (largo + len) / 2;

	for(int i = 0; i < len; i++) {
		rep[i] = cadena[i];
	}
	
	for(size_t j = 0; j < largo; j++) {
		if(j >= izq && j <= der) {
			cadena[j] = rep[j - izq];
		} else {
			cadena[j] = ' ';
		}
	}

	cadena[largo] = '\0';	
}

int main() {
	char c[] = "hola";
	
	printf("%s\n", c);

	centrar(c, 10);

	printf("%s\n", c);

	return 0;
}
