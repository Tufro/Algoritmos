#include <stdio.h>

void	left_trim(char cadena[]) {
	size_t	espacios = 0,
		i = 0;

	while(cadena[espacios] == ' ') {
		espacios++;
	}	

	if(cadena[0] == '\0' || espacios == 0) return;

	while(cadena[espacios + i] != '\0') {
		cadena[i] = cadena[espacios + i];
		i++;
	}

	cadena[i] = '\0';
}

int main() {
	char	p[] = " hola mundo ";

	printf("\"%s\"\n", p);

	left_trim(p);

	printf("\"%s\"\n", p);

	return 0;
}
