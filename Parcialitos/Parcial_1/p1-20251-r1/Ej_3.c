#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double	ep;
	char	buffer[128];

	printf("Ingrese la edad del perro: ");

	if(!fgets(buffer, sizeof(buffer), stdin)) return 1;
	ep = strtod(buffer, NULL);

	if(ep <= 0) {
		fprintf(stderr, "El perro no existe\n");
	} else {
		printf("La edad del humano es de %.2lf\n", 16 * log(ep) + 31);
	}

	return 0;
}
