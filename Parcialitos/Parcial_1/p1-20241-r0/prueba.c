#include <stdio.h>

void  centrar(char centrar[], size_t largo) {
	size_t	len = 0
		i = 0;

	while(centrar[len] != '\0') {
		len++;
	}
	
	if(len > largo + 1) return;

	size_t	izq = (largo - len) / 2,
		der = (largo + len) / 2;
	
	for(size_t i = 0; i < largo; i++) {
		if(i < izq) {
			centrar[i++] = centrar[i];
		} else if(i >= izq && i ) {

		} else {
			centrar[i++] = ' ';
		}	
	}
	
	centrar[len] = '\0';
}

int main() {
	char	a[] = "hola";

	printf("\"%s\"\n", a);

	centrar(a, 10);	

	printf("\"%s\"\n", a);

	return 0;
}
