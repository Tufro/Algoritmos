#include "stdio.h"
#include "stdlib.h"

char *left_trim(const char *cadena) {
	if(!cadena) return NULL;

	size_t	i = 0,
		len = 0;

	while(cadena[i] == ' ' || cadena[i] == '\t' || cadena[i] == '\n') {
		i++;
	}
	
	while(cadena[len] != '\0') {
		len++;
	}

	char *salida = malloc((len + 1) * sizeof(char));

	if(!salida) {
	       	fprintf(stderr, "ERROR\n");	
		return NULL;
	}

	for(size_t j = 0; j < len; j++) {
		salida[j] = cadena[i + j];
	}

	salida[len] = '\0';

	return salida;
}

int main(){
	char	*text = "	\t\ndragon",
		*resultado = left_trim(text);

	printf("Entrada: %s\nResultado: %s\n", text, resultado);
	
	free(resultado);

	return 0;	
}	
