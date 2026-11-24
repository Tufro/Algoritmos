#include "stdio.h"
#define N 3 
#define A 2

int main() {
    int     a = A;

    for (int i = 1; i < N + 1; ++i) {
        a*= a;
    }
    return printf("%d tetración de %d = %d\n", N, A, a);
}
