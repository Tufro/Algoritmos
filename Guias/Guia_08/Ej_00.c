#include <stdio.h>

int main(void) {
	FILE  *f = fopen("prueba.txt", "w");
	if(!f) return 1;

	int	c = fgetc(f);
	if(c == EOF) {
		printf("LLegue al final\n");
		return 0;
	}
	
	putchar(c);
	putchar('\n');

	fclose(f);

	return 0;
}
