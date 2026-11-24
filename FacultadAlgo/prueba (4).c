#include <stdio.h>

int main() {


    for (int i = 0, j = 5; i < j; i++, j--) {
        printf("i = %d j = %d\n", i, j);
    }

    printf("################################################################\n");

    /*for (int a = 0; a < 5; ++a) {
        for (int b = 5; a < b; b--) {
            printf("a = %d b = %d\n", a, b);
        }
    }*/

    int     a = 0,
            b = 5;

    while(a < b) {
        printf("a = %d b = %d\n", a, b);
        a++;
        b--;
    }

    return 0;
}
