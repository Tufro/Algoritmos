#include <stdio.h>

double	c_a_f(double c) { 
	return 5.0 * (c - 32.0) / 9.0;
}

int main() {	
	printf("o--------------------o\n");
	printf("|%9s|%9s|\n", "Celsius", "Fahrenheit");
	printf("|--------------------|\n");
	for(size_t i = 0; i < 11; i++) {
		double	x = (double)i * 10.0,
			y = c_a_f(x);
		printf("|%7.2lfC = %8.2lfF|\n", x, y);
	}
	printf("o--------------------o\n");
	
	return 0;
}
