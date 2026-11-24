#include "stdio.h"
#define N 123456789

int main() {

    int     r = 0,
            m = 0,
            n = N;

    while(n > 0) {
        r = n % 10;
        m = m * 10 + r;
        n = n / 10;
    }

    return printf("%d   %d\n", N, m);
}