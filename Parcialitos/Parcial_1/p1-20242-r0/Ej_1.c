#include "stdio.h"
#define C "130"

void	mi_atoi(const char s[]) {
	size_t	len = 0;
	int	rep;

	while(s[len] != '\0') {
		len++;
	}

	printf("len = %ld\n", len);

	for(int i = 0; i < len; i++) {

		printf("s[%d] = %c\n", i, s[i]);
		rep += s[i] * 10;
		printf("%dº rep = %d\n", i, rep);

	}

	putchar('\n');

	//return n;
}

int main() {
	
	//char	n = C[1] + C[0];
	
	//printf("(C[1] = %c + C[0] = %c) = %c\n", C[1], C[0], n - '0');

	mi_atoi(C);

	return 0;
}
