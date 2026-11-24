#include "stdio.h"

int main() {
    double	n = 1.0;

    for (int i = 1; i < 10; ++i) {
        n += 1 / (i * n + n);
    }
    return printf("e = %lf\n", n);
}
