#include "stdio.h"
#include "stdbool.h"
#define C "pokemones"

bool	es_inclusiva(char cadena[]) {
	size_t	len = 0;

	while(cadena[len] != '\0') {
		if(cadena[len] == 'e') {
			return true;	
		}
		len++;
	}

	return false;
}

int main() {
	char	v[] = "Es inclusiva",
		f[] = "No es inclusiva";

	printf("%s\n", es_inclusiva(C) ? v : f);

	return 0;
}
