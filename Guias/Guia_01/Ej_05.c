#include <stdio.h>
#include <math.h>

double	norma(double x, double y, double z) {
	return sqrt(x * x + y * y + z * z);
}

int main() {
	double	x = 1.0,
		y = 2.0,
		z = 3.0;

	printf("|%.2lf, %.2lf, %.2lf| = ", x, y, z);
	printf("%.2lf\n", norma(x, y, z));

	return 0;
}
