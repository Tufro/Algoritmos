#include <stdio.h>

unsigned int  factorial(unsigned int n) {
    	unsigned int	k = 1;
	
        for (unsigned int i = 1; i < n + 1; i++) {
        	k *= i;
	}
        
	return k;
}

double	numero_e(unsigned int n) {
    	double	e = 0.0;

    	for (unsigned int i = 0; i < n + 1; i++) {
		e += 1.0 / factorial(i);
    	}

	return e;
}

double	exponencial(unsigned int n, double x) {
    	double	e = 0.0,
		p = 1.0;

    	for (unsigned int i = 0; i < n + 1; i++) {
		e += p / factorial(i);
		p *= x;
    	}
    
	return e;
}

double	producto_wallis(unsigned int n) {
   	double	x = 1.0;

    	for (double i = 1.0; i < (double)n + 1.0; i++) {
		x *= 4 * (i * i) / (4 * (i * i) - 1.0);
	}
    	
	return x;
}

double  tetracion(unsigned int n, double a) {
	double resultado = a;

    	for (unsigned int i = 2; i < n + 1; i++) {
        	unsigned int temp = 1;
        	for (unsigned int j = 0; j < resultado; j++) {
            		temp *= a;
        	}
        	resultado = temp;
    	}

    	return resultado;
}

int main() {
	unsigned int	n = 3;
	double		x = 2.0;

	printf("%u! = %u\n", n, factorial(n));	
	printf("e = %.2lf\n", numero_e(n));
	printf("e^%.2lf = %.2lf\n", x, exponencial(n, x));
	printf("pi / 2 = %.2lf\n", producto_wallis(n));
	printf("^%u %.2lf = %.2lf\n", n, x, tetracion(n, x));
	
	return 0;
}
