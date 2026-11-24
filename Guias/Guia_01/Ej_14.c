#include <stdio.h>
#define DESDE 1
#define HASTA 10 

int main() {
	int	k = DESDE,
		l = DESDE;

	if(DESDE > HASTA|| HASTA - DESDE > 9) return 1;

	while(k != HASTA + 1) {
		printf("o------------o");
		k++;
	}
	putchar('\n');
	
	for(int i = DESDE - 2; i < HASTA + 1; i++) {
		for (int j = DESDE; j < HASTA + 1; j++) {
			if(i == DESDE - 2) {
				printf("| TABLA %4d |", j);
			} else if(i == DESDE - 1) {
				printf("o------------o");
			} else {
				printf("|%2d x%2d =%4d|", i, j, i * j);
			}	
		}
		putchar('\n');		
	}

	while(l != HASTA + 1) {
		printf("o------------o");
		l++;
	}
	putchar('\n');

	return 0;
}
