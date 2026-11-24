#include "stdio.h"
#define A 2320

int main() {

    int     a = A,
            b = 1000,
            c = A / b;

    printf("%d ARS = ", A);

    while(b != 1) {

        if(c) {
            printf("%d*%d ARS", c, b);        
        }

        a = a % b;
        b /= 10;
        c = a / b;   

        if (b != 1 && c) {
            printf(" + ");
        }
    }

    if(c) {
        printf(" + %d ARS\n", c);        
    } else {
        printf("\n");
    }

    return 0;
}