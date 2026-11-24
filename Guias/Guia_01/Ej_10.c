#include <stdio.h>

int  signo(double x) {
	return x > 0 ? 1 : 0;
}

int main() {
	double	x = 2.0;

	printf("%.2lf ", x);
	printf("es %s\n", signo(x) ? "positivo" : "negativo");

	return 0;
}
