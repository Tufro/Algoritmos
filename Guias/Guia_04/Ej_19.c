#include <stdio.h>

void  insertar(char s1[], char s2[], size_t n) {
	size_t	len1 = 0,
		len2 = 0;

	while(s1[len1] != '\0') len1++;
	while(s2[len2] != '\0') len2++;

	for(int i = len1; i >= n; i--) {
		s1[i + len2] = s1[i];
	}

	for(size_t j = 0; j < len2; j++) {
		s1[j + n] = s2[j];
	}
}

int main() {
	size_t	n = 5;

	char	b[] = " menos",
		a[20] = "Frase corta";
	
	printf("\"%s\" & \"%s\" --> ", a, b);
	
	insertar(a, b, n);

	printf("\"%s\"\n", a);

	return 0;
}
