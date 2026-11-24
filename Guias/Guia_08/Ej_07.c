#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define MAXIMO 1000000

int main(int argc, char *argv[]) {
	const char *nombre = (argc > 1) ? argv[1] : "enteros.bin";

    	FILE *f = fopen(nombre, "wb");
    	if (!f) {
        	fprintf(stderr, "No se pudo abrir %s para escritura\n", nombre);
        	return 1;
    	}

    	for (int32_t i = 0; i <= MAXIMO; i++) {
        	if (fwrite(&i, sizeof(i), 1, f) != 1) {
            		fprintf(stderr, "Error al escribir el entero %ld\n", (long)i);
        		fclose(f);
            		return 1;
        	}
    	}

    	if (fclose(f) != 0) {
    		fprintf(stderr, "Error al cerrar %s\n", nombre);
        	return 1;
    	}

	return 0;
}
