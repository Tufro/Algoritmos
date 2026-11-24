#include "stdio.h"
#include "math.h"

int main() {
    double	n = 1.0,
            x = 1.0;

    for (int i = 1; i < 10; ++i) {
        n += pow(x, i) / (i * n + n);
    }
    return printf("e = %lf\n", n);
}
