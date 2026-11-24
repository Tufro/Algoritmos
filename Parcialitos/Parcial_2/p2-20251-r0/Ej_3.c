#include <stdio.h>
#include <stdlib.h>

char	*leer_linea() {
	size_t	cap = 128,
		i = 0,
		c;
	char	*buffer = malloc(sizeof(char) * cap);
	
	if(!buffer) return NULL;
	
	while((c = getchar()) != EOF  && c != '\n') {
		buffer[i++] = (char)c;
		if(i >= cap - 1) {
			cap *= 2;
			char *temp = realloc(buffer, cap); 	
			if(!temp) {
				free(buffer);
				return NULL;
			}
			buffer = temp;
		}
	}

	if(i == 0) {
		free(buffer);
		return NULL;
	}

	buffer[i] = '\0';
	
	return buffer;
}

int main() {
	printf("Escriba algo: ");
	
	char	*a = leer_linea();	

	printf("\"%s\"\n", a ? a : "Error al leer");
	
	free(a);

	return 0;
}
