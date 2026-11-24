#include "stdio.h"
#define LETRA 'M'

int main() {


    switch (LETRA) {
      case 'A':
        return printf("House Arryn\n");
        break;
      case 'B':
        return printf("House Baratheon\n");
        break;
      case 'F':
        return printf("House Frey\n");
        break;
      case 'G':
        return printf("House Greyjoy\n");
        break;
      case 'L':
        return printf("House Lannister\n");
        break;
      case 'M':
        return printf("House Martell\n");
      case 'S':
        return printf("House Stark\n");
      case 'T':
        return printf("House Targaryen\n");
        break;        
      default:
        return printf("No lo conozco\n");
    }
}
