#include <stdio.h>

int main(int argc, char  *argv[]) {
	if(argc != 3) {
		fprintf(stderr, "Error\n");
		return 1;
	}

	FILE	*a = fopen(argv[1], "r"),
		*b = fopen(argv[2], "w");
	
	if(a == NULL || b == NULL) {
		fprintf(stderr, "Error\n");
		return 1;
	}	
	
	char	linea[1024];

	while(fgets(linea, sizeof(linea), a) != NULL) {
		fputs(linea, b);
	}
	
	fclose(a);
	fclose(b);

	return 0;
}
