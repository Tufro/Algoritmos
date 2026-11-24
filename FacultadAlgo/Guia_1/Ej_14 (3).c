#include "stdio.h"

int main() {
	int   	i = 0; 

	while(i != 11) {
		for (int j = 0; j < 11; ++j) {
			printf("%d x %d = %d\n\r", i, j, j * i);
		}
		i++;
	}

return 0;
}