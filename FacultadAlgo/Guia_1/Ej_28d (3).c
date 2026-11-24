#include "stdio.h"
#define A 20
#define M 3
#define D 12

int main()  {
    int     m = 0,
            mm = 0,
            n = 0,
            i = 0,
            j = 0,
            k = 0,
            kk = 0;

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
            mm = 29;
        }
        else {
            k = 59;
            kk = 28;
        }
        break;
      case 3:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 91;
            mm = 31;
        }
        else {
            k = 90;
            kk = 31;
        }
        break;
      case 4:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 121;
            mm = 30;
        }
        else {
            k = 120;
            kk = 30;
        }
        break;
      case 5:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 152;
            mm = 31;
        }
        else {
            k = 151;
            kk = 30;
        }
        break;
      case 6:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 182;
            mm = 30;
        }
        else {
            k = 181;
            kk = 30;
        }
        break;
      case 7:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 213;
            mm = 31;
        }
        else {
            k = 212;
            kk = 31;
        }
        break;      
      case 8:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 244;
            mm = 31;
        }
        else {
            k = 243;
            kk = 31;
        }
        break;      
      case 9:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 274;
            mm = 30;
        }
        else {
            k = 273;
            kk = 30;
        }
        break;      
      case 10:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 305;
            mm = 31;
        }
        else {
            k = 304;
            kk = 31;
        }
        break;      
      case 11:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 335;
            mm = 30;
        }
        else {
            k = 334;
            kk = 30;
        }
        break;      
      case 12:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            m = 366;
            mm = 31;
        }
        else {
            k = 365;
            kk = 31;
        }
        break;      
      default:
        m = 0;
    }

    printf("Dada la fecha %d/%d/%d faltan %d dias para el fin de mes\n", D, M, A,  mm + kk - D);
    return 0;
}