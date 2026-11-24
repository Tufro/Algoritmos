#include <stdio.h>

void abreviar_nombre(char nombre[]) {
	size_t	len = 0;

	while(nombre[len] != '\0') {
		len++;
	}

	if(len < 3 || len > 11) {
		fprintf(stderr, "ERROR CON TAMANIO\n");
		return;
 	}

	nombre[1] = (char)(len - 2) + '0';
	nombre[2] = nombre[len - 1];
	nombre[3] = '\0';
}

int main() {
	
	char a[] = "pirulo";

	abreviar_nombre(a);
	
	printf("%s\n", a); 

	return 0;
}
