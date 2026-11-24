#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void crear_sigla(const char texto[], char siglas[]) {
	bool	palabra = true;
	size_t	len = 0,
		i = 0;

	while(texto[len] != '\0') {
		if(texto[len] == ' ') {
			palabra = true;
		} else if(palabra) {
			siglas[i++] = (char)toupper(texto[len]);
			palabra = false;		
		}
		len++;
	}
	if(len == 0) return;
	siglas[i] = '!';
	siglas[i + 1] = '\0';
}

int main() {
	char	texto[] = "Washington es la capital";
    	size_t	len = 0;
	while(texto[len] != '\0') len++;
	char	siglas[len];

    	crear_sigla(texto, siglas);
    	printf("Texto: \"%s\"\nSiglas: \"%s\"\n", texto, siglas);
	
	return 0;
}
