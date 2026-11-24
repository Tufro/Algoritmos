#include "stdio.h"
#define N 5
#define R 4

int main() {

    int     n = 1,
            m = 1,
            nn = 1;

    if (N < 0 || R < 0) {
        return printf("Esta definido en los enteros positivos\n");
    } else {
        for (int i = 1; i < N; ++i) {
            n += i * n;
        }

        for (int j = 1; j < R; ++j) {
            m += j * m;
        }

        for (int k = 1; k < N - R; ++k) {
            nn += k * nn;
        }
    }
    return printf("%d agarrado de %d es igual a %d\n", N, R, n / (m * nn));
}