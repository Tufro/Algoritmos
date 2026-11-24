#include "stdio.h"
#define N 9511

void imprimir_numero(int n) {
    int     m = n, 
            d = 0;

    while (n > 0) {
        n /= 10;
        d++;
    }

    int   c[d];

    for (int j = 0; j < d; ++j) {
        c[j] = m % 10;
        m /= 10;
    }

    for (int i = 0; i < d; ++i) {
        putchar(c[d - i - 1] + 48);    
    }

    putchar('\n');
}

int main() {

    imprimir_numero(N);

    return 0;
}
