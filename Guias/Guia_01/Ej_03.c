#include <stdio.h>

double	c_a_f(double c) { 
	return 5.0 * (c - 32.0) / 9.0;
}

int main() {
	double	c = 0.0,
		f = c_a_f(c);	

	printf("%.2lfºF = %.2lfºC\n", f, c);
	
	return 0;
}
