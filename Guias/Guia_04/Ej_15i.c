#include <stdio.h>

char	*full_trim(char *cadena) {
	size_t	i = 0,
		len = 0;

	while(cadena[len] == ' ') len++;
	while(cadena[len] != '\0') 
		cadena[i++] = cadena[len++];
	while(len > 0 && cadena[len - 1] == ' ') len--;

	cadena[len] = '\0';

	return cadena;
}

int main() {
	char	a[] = " hola mundo  ";	

	printf("Original: \"%s\"\n", a);

	printf("Final: \"%s\"\n", full_trim(a));
		
	return 0;
}
