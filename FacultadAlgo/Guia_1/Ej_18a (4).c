#include "stdio.h"
#define M 5

int main() {
    int     n = 1;

    if (M < 0) {
        return printf("Error\n");
    } else if (M == 0) {
        return printf("0! = 1\n");
    } else {
        for (int i = 1; i < M; ++i) {
            n += i * n;
        }
        return printf("(%d)! = %d\n", M, n);
    }
}
