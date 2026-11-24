#include "stdio.h"
#define A 20
#define M 3

int main()	{
    int     m = 0,
            n = 0,
            i = 0,
            j = 0,
            k = 0;

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
        m = 31,
        k = 31;
        break;
      case 2:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 60;
        }
        else {
            k = 59;
        }
        break;
      case 3:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 91;
        }
        else {
            k = 90;
        }
        break;
      case 4:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 121;
        }
        else {
            k = 120;
        }
        break;
      case 5:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 152;
        }
        else {
            k = 151;
        }
        break;
      case 6:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 182;
        }
        else {
            k = 181;
        }
        break;
      case 7:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 213;
        }
        else {
            k = 212;
        }
        break;      
      case 8:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 244;
        }
        else {
            k = 243;
        }
        break;      
      case 9:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 274;
        }
        else {
            k = 273;
        }
        break;      
      case 10:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 305;
        }
        else {
            k = 304;
        }
        break;      
      case 11:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 335;
        }
        else {
            k = 334;
        }
        break;      
      case 12:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 366;
        }
        else {
            k = 365;
        }
        break;      
      default:
        m = 0;
    }

    printf("Dado el anio %d y el mes %d hay %d dias en total\n", A, M, i * 366 + j * 365 + m + k);
    return 0;
}