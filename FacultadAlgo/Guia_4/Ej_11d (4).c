#include "stdio.h"
#define ENTRADA "Hola"
#define SALIDA "Hola"

int strcmp(const char *s1, const char *s2) {
    while (*s1 == *s2 || *s1 == '\0') { // Mientras los caracteres sean iguales y no sea '\0'
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main() {
    printf("%d\n", strcmp(ENTRADA, SALIDA));
}