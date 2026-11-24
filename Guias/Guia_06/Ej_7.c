#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

char **split(const char *s, const int *anchos, size_t ncampos) {
	if(!s || !anchos || ncampos == 0) {
		fprintf(stderr, "ERROR\n");
		return NULL;
	}

	char **salida = malloc(ncampos * sizeof(char *));
	if (!salida) return NULL;

	size_t pos = 0;

	for(size_t i = 0; i < ncampos; i++) {
		salida[i] = malloc((anchos[i] + 1) * sizeof(char));
		if(!salida[i]) {
			for(size_t j = 0; j < anchos[i]; j++) {
				free(salida[j]);
			}
			free(salida);
			return NULL;
		}

		for(int k = 0; k < anchos[i]; k++) {
			salida[i][k] = s[pos + k];
		}
		salida[i][anchos[i]] = '\0';
		pos += anchos[i];
	}
	
	return salida;
}

bool split_bool(const char *s, const int *anchos, size_t ncampos, char *** campos) {
	if(!campos) return false;
	*campos = split(s, anchos, ncampos);
	return *campos != NULL;
}

int main() {
	const int	b[] = {3, 3, 4},
			lenb = sizeof(b) / sizeof(b[0]);
	const char	*a = "unodostres";
	char		**resultado;

	if(split_bool(a, b, lenb, &resultado)) {
		for(size_t i = 0; i < lenb; i++) {
			printf("%s ", resultado[i]);
			free(resultado[i]);
		}
		free(resultado);
		printf("\n");
	} else {
		printf("Error al dividir la cadena\n");
	}

	return 0;
}
