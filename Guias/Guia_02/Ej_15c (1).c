#include "stdio.h"
#include "stdlib.h"
#define N 6
#define X 1.0
#define K 2

void superpolyder(const int coeffs[], size_t n, double x, size_t k) {
	int         c[n - k],
				a[k],
				b[n - k],
				fact = 1,
				fact2 = 1;

	printf("f(%ld)(x) = ", k);

	a[0] = 1;
	b[0] = 1;

    for (int f = 1; f < n; ++f) {
    	fact *= f;
        a[f] = fact;
    }

    for (int h = 1; h < n - k; ++h) {
    	fact2 *= h;
        b[h] = fact2;
    }

	if (k >= n) {
		printf("0\n");
	} else {
		for (int j = 0; j < n; ++j) {
			c[n - j - 1 - k] = (a[n - j - 1] / b[n - j - k - 1]) * coeffs[n - j - 1];
			
			if (2 < n - j - k) {
				if (c[n - j - 1- k] == 0) {
					printf("+ ");
				} else if (c[n - j - 1- k] == 1) {
					printf("x^%ld + ", n - j - 1 - k);
				} else {
					printf("%dx^%ld + ", c[n - j - 1 - k], n - j - 1 - k);
				}
			} else if(n - j - k == 2) {
				if (c[n - j - 1- k] == 0) {
					printf(" ");
				} else if (c[n - j - 1- k] == 1) {
					printf("x");
				} else {
					printf("%dx", c[n - j - 1 - k]);
				}
			} else if(n - j - k == 1){
				if (c[n - j - 1- k] == 0) {
					printf("\n");
				} else {
					printf(" + %d\n", c[n - j - 1 - k]);
				}
			} else {
				break;
			}
			
		}
	}
}

int main() {
	int    	a[N];

	printf("f(x) = ");

	for (int i = 0; i < N; ++i) {
		a[N - i - 1] = rand() % 10;

		if (i < N - 2) {
			printf("%dx^%d + ", a[N - i - 1], N - i - 1);
		}
	}

	printf("%dx + %d\n", a[1], a[0]);

	superpolyder(a, N, X, K);

	return 0;
}