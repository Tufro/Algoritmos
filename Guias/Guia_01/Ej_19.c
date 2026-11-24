#include <stdio.h>

unsigned int combinatoria(unsigned int n, unsigned int k) {
        unsigned int	a = 1,
			b = 1,
			c = 1;
	
	for (unsigned int i = 1; i < n + 1; i++) a *= i;

        for (unsigned int j = 1; j < k + 1; j++) b *= j;

        for (unsigned int z = 1; z < n - k + 1; z++) c *= z;

    	return a / (b * c);
}

int main() {
	unsigned int	n = 0,
			k = 0;

	printf("%uC%u = %u\n", n, k, combinatoria(n, k));

	return 0;
}
