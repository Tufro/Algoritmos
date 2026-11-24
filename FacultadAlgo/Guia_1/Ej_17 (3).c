#include "stdio.h"

int main() {
	int 	i = 0,
			j = 0;

	for (i = 0; i < 7; ++i) {
		for (j = 0; j < 7; ++j) {
			
			if(i <= j) {
					printf("%d|%d\n", i, j);
			}
		}
	}
	return 0;
}