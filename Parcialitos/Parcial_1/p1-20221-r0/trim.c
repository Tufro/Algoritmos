#include <stdio.h>

void	trim(char cadena[]) {
	size_t	i = 0,
		len = 0;

	while(cadena[len] == ' ') len++;
	while(cadena[len] != '\0') 
		cadena[i++] = cadena[len++];
	while(cadena[len - 1] == ' ') len--;

	cadena[len] = '\0';
}

int main() {
	char	a[] = " hola mundo  ";

	printf("Original: \"%s\"\n", a);

	trim(a);

	printf("Final: \"%s\"\n", a);
		
	return 0;
}
