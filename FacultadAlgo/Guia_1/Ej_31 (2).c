#include "stdio.h"
#include "math.h"
#define P 35
#define Q 729

int main() {
    int         i = P,
                j = Q;
    double      n = ceil((double)j / (double)i);
    
    printf("%d/%d = ", P, Q);

    if (P != 1) {
        while (j % i) {
            n = ceil((double)j / (double)i);
            i = n * i - j;
            j *= n;
            printf("1/%d + ", (int)n);
        }
        n = ceil((double)j / (double)i);
        i = n * i - j;
        j *= n;
        printf("1/%d\n", (int)n);
    } else {
        n = ceil((double)j / (double)i);
        i = n * i - j;
        j *= n;
        printf("1/%d\n", (int)n);
    }

    return 0; 
}