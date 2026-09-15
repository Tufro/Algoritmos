#include <stdio.h>
#include <stdlib.h>

int main() {
	char	buffer[128];
	int	nota;

	printf("Escriba la nota: ");

	if(!fgets(buffer, sizeof(buffer), stdin)) return 1;
		nota = atoi(buffer);
	
	if(nota < 4 && nota >= 0) {
		printf("Reprobo :(\n");
	} else if(nota >= 4 && nota <= 10) {
		printf("Aprobo :D\n");
	} else {
		fprintf(stderr, "Nota no valida\n");
	}

	return 0;
}
