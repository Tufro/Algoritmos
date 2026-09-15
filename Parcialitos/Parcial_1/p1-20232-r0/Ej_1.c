#include "stdio.h"

void abreviar_texto(char nombre[]) {
	int	len = 0,
		j = 0;

	while (nombre[len] != '\0') {
		char c = nombre[len];

		if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
 			nombre[j] = c;
			j++;
 		}

       		len++;
	}

    nombre[j] = '\0';

    printf("%s\n", nombre); 
}

int main() {
	char	c[] = "algoritmos y programacion";
	
	printf("%s\n", c); 

	abreviar_texto(c);

	return 0;
}

