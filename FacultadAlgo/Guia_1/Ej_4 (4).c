#include "stdio.h"

int main() {
	int h = 23,
		m = 43,
		s = 54,
		mm = 0;	

	mm = h * 3600 + m * 60 + s;

return printf("s = %d\n", mm);
}