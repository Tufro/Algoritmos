#include "stdio.h"
#include "math.h"

int main() {
	for (int c = 0; c < 101; ++c) {
		printf("F(%d) = %0.2lf\n", c, 9.0 * c / 5.0 + 32.0);
	}
return 0;
}