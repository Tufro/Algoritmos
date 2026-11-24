#include "stdio.h"

int main() {
    double	x = 1.0;

    for (int i = 1; i < 1000; ++i) {
        x *= ((2.0 * i) * (2.0 * i)) / ((2.0 * i - 1.0) * (2.0 * i + 1.0));
    }
    return printf("pi / 2 = %lf\n", x);
}
