#include "stdio.h"

int comparar(int a, int b) {
	if(a < b) {
		return -1;
	} else if (a == b) {
		return 0;
	} else {
		return 1;
	}
}

int main() {
	int	a = 100,
		b = 0;

	switch(comparar(a, b)) {
		case -1:
			printf("%d < %d\n", a, b);
		case 0:
			printf("%d = %d\n", a, b);
		case 1:
			printf("%d > %d\n", a, b);
	}

	return 0;
}
