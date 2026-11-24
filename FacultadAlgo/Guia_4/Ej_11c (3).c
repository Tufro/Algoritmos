#include "stdio.h"
#define N 10

char *strncpy(char *dest, const char *src, size_t n) {
    
    // Copiar caracteres de src a dest hasta n o hasta encontrar '\0'
    for (size_t i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // Si src es más corta que n, rellenar con '\0'
    for (size_t j = 0; j < n; j++) {
        dest[j] = '\0';
    }

    return dest;
}

int main() {
    char dest[10];

    strncpy(dest, "Hola", N);
    printf("%s\n", dest);

    return 0;
}