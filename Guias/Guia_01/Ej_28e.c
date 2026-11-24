#include "stdio.h"
#define A 20
#define M 3
#define D 12

int main()  {
    int     m = 0,
            n = 0,
            i = 0,
            j = 0,
            k = 0,
            a = 0,
            b = 0;

    while(n != A) {  
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            n++;
            i++;
        }
        else {
            n++;
            j++;
        }
    }

    switch(M) {
      case 1:
        m = 31;
        k = 31;
        break;
      case 2:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 60;
            a = 1;
        }
        else {
            k = 59;
            b = 0;
        }
        break;
      case 3:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 91;
            a = 1;
        }
        else {
            k = 90;
            b = 0;
        }
        break;
      case 4:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 121;
            a = 1;
        }
        else {
            k = 120;
            b = 0;
        }
        break;
      case 5:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 152;
            a = 1;
        }
        else {
            k = 151;
            b = 0;
        }
        break;
      case 6:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 182;
            a = 1;
        }
        else {
            k = 181;
            b = 0;
        }
        break;
      case 7:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 213;
            a = 1;
        }
        else {
            k = 212;
            b = 0;
        }
        break;      
      case 8:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 244;
            a = 1;
        }
        else {
            k = 243;
            b = 0;
        }
        break;      
      case 9:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 274;
            a = 1;
        }
        else {
            k = 273;
            b = 0;
        }
        break;      
      case 10:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 305;
            a = 1;
        }
        else {
            k = 304;
            b = 0;
        }
        break;      
      case 11:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 335;
            a = 1;
        }
        else {
            k = 334;
            b = 0;
        }
        break;      
      case 12:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 366;
            a = 1;
        }
        else {
            k = 365;
            b = 0;
        }
        break;      
    }

    printf("Dada la fecha %d/%d/%d faltan %d dias para el fin del año\n", D, M, A,  366 * a + 365 * b - D - m  - k);
    return 0;
}