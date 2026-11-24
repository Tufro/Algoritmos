#include "stdio.h"
#define N 2366 
#define M 273 

int main() {

    int     n = N,
            m = M,    
            r = N % M;

    printf("n = %d m = %d r = %d\n", n, m, r);

    while(r) {
        r = n % m;
        m = n;
        n = r;
        printf("n = %d m = %d r = %d\n", n, m, r);        
    }

    return 0;
}