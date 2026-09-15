#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#define MAX 10

char	*leer_palabra() {
	int	c;
	size_t	i = 0,
		cap = MAX;
	char	*buffer = malloc(cap * sizeof(char));

	while((c = getchar()) != EOF && c != '\n' && isalnum(c)) {
		buffer[i++] = (char)c;
		if(i >= cap - 1) {
			cap *= 2;
			char	*tmp = realloc(buffer, cap);
			if(!tmp) {
				free(buffer);
				return NULL;
			}
			buffer = tmp;
		}
	}
	buffer[i] = '\0';

	if(!i) {
		free(buffer);
		return NULL;
	}
	
	return buffer;
}

int main() {
	printf("Escriba: ");

	char	*texto = leer_palabra();

	printf("Leido: %s\n", texto);

	return 0;
}
