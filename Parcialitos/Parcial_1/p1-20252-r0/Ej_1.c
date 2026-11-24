#include <stdio.h>

void  separar(const char s[], char a[], char b[]) {
	size_t	len = 0,
		i = 0;

	while(s[len] != '\0' && s[len] != ',') {
		a[len] = s[len];
		len++;
	}
	a[len] = '\0';

	if(s[len] == ',') len++;

	while(s[len] != '\0') b[i++] = s[len++];
	b[i] = '\0';
} 

int main() {
	const char	s[] = "hola,mundo";
	size_t	len = 0;
	while(s[len] != '\0') len++;
	char	a[len],
		b[len];

	printf("Texto: \"%s\"\n", s);

	separar(s, a, b);
	printf("Parte 1: \"%s\"\n", a);
	printf("Parte 2: \"%s\"\n", b);

	return 0;
}
