#include "stdio.h"
#include "ctype.h"

int main() {
	int	c,
		en_palabra = 0,   // bandera: estamos dentro de una palabra
		contador = 0;     // cantidad de palabras

	printf("Escriba palabra:");

	while ((c = getchar()) != EOF && c != '\n') {
		if (isalnum(c)) {
            		if (!en_palabra) {
                	// empezamos una nueva palabra
                		en_palabra = 1;
                		contador++;
            		}
        	} else {
            	// cualquier separador termina la palabra
            		en_palabra = 0;
        	}
    	}

	printf("Cantidad de palabras: %d\n", contador);
    	
	return 0;
}
