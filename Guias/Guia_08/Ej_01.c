#include <stdio.h>
#define  MAX_LINEA  1024	 

int main(int argc, char *argv[]) {
	if(argc != 3) {
		fprintf(stderr, "Error \n");
		return 1;
	}

	FILE	*f = fopen(argv[1], "w");
	if(f == NULL) {
		fprintf(stderr, "Error al abrir el archivo\n");
		return 1;
	}

	printf("*** Guardaré todo lo que escribas en el archivo: %s ***\n", argv[1]);
	printf("*** Para terminar, el centinela es: %s ***\n", argv[2]);

	char	b[MAX_LINEA];
	size_t	i = 0;

	while(fgets(b, MAX_LINEA, stdin) != NULL) {	
		i = 0;		

		while(argv[2][i] != '\0' && b[i] == argv[2][i]) i++;

		if(argv[2][i] == '\0' && (b[i] == '\n' || b[i] =='\0')) {
			break;
		}
		
		fprintf(f, "%s\n", b);
	}	
	
	fclose(f);

	printf("*** Hasta acá llegamos ***\n");

	return 0;
}
