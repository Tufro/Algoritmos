#include <stdio.h>

unsigned int mi_atoi(const char s[]) {
	size_t	i = 0,
		numero = 0;

	while(s[i] != '\0') {
		numero = numero * 10 + s[i++] - '0';
	}
	
	return numero;
}

int main() {
	char	c[] = "130";

	printf("\"%s\" debiera ser igual a %u\n", c, mi_atoi(c));

	return 0;
}
