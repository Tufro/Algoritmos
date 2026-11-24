#include <stdio.h>

double	f_a_c(double  c) {
	return 9.0 * c / 5.0 + 32.0;
}

int main() {
	double	c = 0.0,
		f = f_a_c(c);	

	printf("%.2lfºC = %.2lfºF\n", c, f);
	
	return 0;
}
