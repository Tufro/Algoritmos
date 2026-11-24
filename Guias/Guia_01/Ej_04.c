#include <stdio.h>

unsigned int  hms_s(unsigned int h, unsigned int m, unsigned int s) {
	return h * 3600 + m * 60 + s;
}

int main() {
	unsigned int	h = 23,
			m = 43,
			s = 54;

	printf("h = %uhs, m = %um, s = %us\n", h, m, s);

	printf("Tiempo en total: %us\n", hms_s(h, m, s));

	return 0;
}
