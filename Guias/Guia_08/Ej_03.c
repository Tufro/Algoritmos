#include <stdio.h>

int main(int argc, char *argv[]) {
	if(argc != 2) {
		fprintf(stderr, "Error\n");
		return 1;
	}

	FILE	*f = fopen(argv[1], "r");

	if(f == NULL) {
		fprintf(stderr, "Error\n");
		return 1;
	}

	size_t	i = 1;
	char	linea[1024];	

	while(fgets(linea, sizeof(linea), f) != NULL) {
		printf("%zu: %s", i, linea);
		i++;
	}

	fclose(f);

	return 0;
}
