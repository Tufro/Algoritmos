#include <stdio.h>

double	capital(unsigned int n, double c, double x) {
	double	muleto = 1.0;

	while(n != 0) {
		muleto *= 1.0 + x / 100.0;
		n--;
	}
	
	return c * muleto;
}

int main() {
	unsigned int	n = 0;
	double	c = 4.0f,
		x = 7.0f;
	
	printf("Cn = %.2lf\n", capital(n, c, x));

	return 0;
}
