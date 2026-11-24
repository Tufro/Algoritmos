#include "stdio.h"
#define A 2000

int main()	{

    if ( (A % 4 == 0 && A % 100 != 0) || A % 400 == 0 )
        printf( "%d es bisiesto\n", A);
    else
        printf( "%d no es bisiesto\n", A);

    return 0;
}