#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	if(argc < 2) {
		fprintf(stderr, "Error\n");
		return 1;
	}

	size_t	n = 1,
		i = 0;
	FILE	*buffer[argc];
	char	*nombres[argc];
	bool	flag_c = false, 
		flag_l = false, 
		flag_w = false;
	
	while(n != argc) {
		if(argv[n][0] == '-') {
			if(argv[n][1] == '\0' || argv[n][2] != '\0') 
				break;
			switch(argv[n][1]) {
				case 'c': flag_c = true; break;
				case 'l': flag_l = true; break;
				case 'w': flag_w = true; break;
				default: break;
			}

			if(argv[n][1] != 'c' && argv[n][1] != 'l' && argv[n][1] != 'w') 
				break;
		} else {
			nombres[i] = argv[n];
			buffer[i] = fopen(argv[n], "rb");
			if(buffer[i] == NULL) {
				fprintf(stderr, "No se pudo abrir %s\n", argv[n]);
				for(size_t k = 0; k < i; k++) fclose(buffer[k]);
				return 1;
			}
			i++;
		}
		n++;
	}

	if(n != argc) {
		fprintf(stderr, "Error con el argumento: %s\n", argv[n]);
		for(size_t k = 0; k < i; k++) fclose(buffer[k]);
		return 1;
	}

	if(i == 0) {
    		fprintf(stderr, "No se especificaron archivos\n");
    		return 1;
	}

	buffer[i] = NULL;
	i = 0;
	unsigned char	a[1024];
	size_t	total_lineas = 0,
		total_palabras = 0,
		total_bytes = 0;

	while(buffer[i] != NULL) {
		size_t	leidos_b,
			bytes_b = 0,
			lineas = 0,
			palabras = 0;
		bool	en_palabra = false;

		while((leidos_b = fread(a, 1, sizeof(a), buffer[i])) > 0) {
			bytes_b += leidos_b;
			for(size_t k = 0; k < leidos_b; k++) {
				if(a[k] == '\n') lineas++;
				if(a[k] == ' ' || a[k] == '\n' || 
				a[k] == '\t' || a[k] == '\r' ||
				a[k] == '\v' || a[k] == '\f') {
					en_palabra = false;	
				} else if(!en_palabra) {
					en_palabra = true;
					palabras++;
				}
			}
		}

		if(ferror(buffer[i])) {
    			fprintf(stderr, "Error al leer %s\n", nombres[i]);
    			for(size_t k = 0; buffer[k] != NULL; k++) {
        			fclose(buffer[k]);
    			}
    			return 1;
		}
	
		total_lineas += lineas;
		total_palabras += palabras;
		total_bytes += bytes_b;
		
		if(flag_l) printf("%2zu ", lineas);
		if(flag_w) printf("%2zu ", palabras);
		if(flag_c) printf("%2zu ", bytes_b);
		printf("%s\n", nombres[i]);
		i++;
	}
	
	if(i > 1 && (flag_l || flag_w || flag_c)) {
		if(flag_l) printf("%2zu ", total_lineas);
		if(flag_w) printf("%2zu ", total_palabras);
		if(flag_c) printf("%2zu ", total_bytes);
		printf("total\n");	
	}

	i = 0;

	while(buffer[i] != NULL) fclose(buffer[i++]);

	return 0;
}
