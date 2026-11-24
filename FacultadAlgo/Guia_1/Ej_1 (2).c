#include "stdio.h"
#define MACRO 5

int main() {
	int 	n = 0;
	double 	c = 4.0,
			x = 2.0,
			y = 1.0,
			nn = 0.0,
			muleto = 1.0;

	while(n != MACRO) {
			muleto *= 1.0 + x / 100.0;
			n++;
	}

return printf("c = %lf\n", c);
}