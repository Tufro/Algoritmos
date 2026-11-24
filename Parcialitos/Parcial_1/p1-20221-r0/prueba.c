#include <stdio.h>

void	right_trim(char cadena[]) {
	size_t	len = 0;
	
	while(cadena[len] != '\0') len++;
	
	while(cadena[len] != ' ') len--;
	
	cadena[len - 1] = '\0';
}

int main() {
	char	c[] = " hola mundo  ";
	
	printf("Original: \"%s\"\n", c);
	right_trim(c);
	printf("Final: \"%s\"\n", c);

	return 0;
}
