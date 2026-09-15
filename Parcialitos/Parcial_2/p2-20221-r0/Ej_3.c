#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
#include "stdint.h"

char	*leer_digitos() {
	int	c = 0;
	size_t	i = 0,
		cap = 64;
	char	*buffer = malloc(cap);

	if(!buffer) return NULL;

	printf("Escriba: ");
			
	while((c = getchar()) != EOF && c != '\n' && isdigit(c)) {
		buffer[i++] = (char)c;
		
		if(i >= cap - 1) {
			cap *= 2;
			char  *tmp = realloc(buffer, cap);
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
	char *texto = leer_digitos();
	
	//printf("SIZE_MAX = %zu\n", SIZE_MAX);

	printf("Leido: %s\n", texto);

	free(texto);

return 0;
}
