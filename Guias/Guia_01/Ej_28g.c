#include "stdio.h"
#define A 20
#define M 3
#define D 20
#define AA 25
#define MM 4
#define DD 20


int main()  {
    int     m = 0,
            n = 0,
            n = 0,
            i = 0,
            ii = 0,
            j = 0,
            jj = 0,
            k = 0,
            mm = 0,
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

    while(n != AA) {  
        if ( (nn % 4 == 0 && nn % 100 != 0) || nn % 400 == 0 ) {
            nn++;
            ii++;
        }
        else {
            nn++;
            jj++;
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
    }

    switch(MM) {
      case 1:
        mm = 31;
        kk = 31;
        break;
      case 2:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 60;
        }
        else {
            kk = 59;
        }
        break;
      case 3:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mmb = 91;
        }
        else {
            kk = 90;
        }
        break;
      case 4:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 121;
        }
        else {
            kk = 120;
        }
        break;
      case 5:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 152;
        }
        else {
            kk = 151;
        }
        break;
      case 6:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 182;
        }
        else {
            kk = 181;
        }
        break;
      case 7:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 213;
        }
        else {
            kk = 212;
        }
        break;      
      case 8:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 244;
        }
        else {
            kk = 243;
        }
        break;      
      case 9:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 274;
        }
        else {
            kk = 273;
        }
        break;      
      case 10:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 305;
        }
        else {
            kk = 304;
        }
        break;      
      case 11:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 335;
        }
        else {
            kk = 334;
        }
        break;      
      case 12:
        if ( (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ) {
            mm = 366;
        }
        else {
            kk = 365;
        }
        break;      
    }
  
  
    printf("Dadas las fechas %d/%d/%d y %d/%d/%d transcurrieron %d dias, %d meses y % anios\n", D, M, A, DD, MM, AA(m + k) - D);
    return 0;
}