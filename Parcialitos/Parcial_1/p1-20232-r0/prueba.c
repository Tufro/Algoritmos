#include <stdio.h>

void	abreviar_texto(char nombre[]) {
	size_t	len = 0,
		i = 0;

	while(nombre[len] != '\0') {
		char	c = nombre[len];

		if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
			nombre[i++] = c;
		}
		len++;
	}

	nombre[i] = '\0';
}

int main() {
	char	a[] = "algoritmos y programacion";

	printf("\"%s\"\n", a);

	abreviar_texto(a);

	printf("\"%s\"\n", a);

	return 0;
}
