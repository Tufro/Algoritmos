#include "stdio.h"
#include "stdlib.h"

char  *join(char  *cadenas[], size_t n, char separador) {
	size_t	i = 0,
		len = 0;

	while(i != n) {
		size_t	j = 0;
		while(cadenas[i][j] != '\0') {
			len++;
			j++;
		}
		i++;
	}

	char	*juntar = malloc((len + n - 1) * sizeof(char));
	
	if(!juntar) return NULL;

	size_t	m = 0;

	for(size_t k = 0; k < n; k++) {
		size_t	l = 0;
		while(cadenas[k][l] != '\0') {
			juntar[m++] = cadenas[k][l++];
		}
		if(cadenas[k][l] == '\0' && k != n - 1) juntar[m++] = separador;
	}	
	juntar[m] = '\0';
	
	return juntar;
}

int main() {
	char	*a[] = {"Hola", "que", "tal"},
		b = ' ';
	size_t	len = sizeof(a) / sizeof(a[0]);
	char	*s = join(a, len, b);

	for(size_t i = 0; i < len; i++) {
		printf("\"%s\"", a[i]);
 	}

	printf(" con el separador '%c'-> %s.\n", b, s);
	
	free(s);
	
	return 0;
}
