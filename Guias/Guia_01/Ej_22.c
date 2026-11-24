#include "stdio.h"
#define A 5

void es_primo(int a) {
    int     i = 2,
            k = 0;

    while(i < A) {
        if(A % i == 0) {
            k++;
        }
        i++;
    }

    if (k) {
        printf("%d no es primo\n", A);
    } else {
        printf("%d es primo\n", A);
    }
}

int main() {
    es_primo(A);
    return 0;
}

