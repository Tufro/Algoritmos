#include "stdio.h"
#define CADENA "Cadena"

size_t strlen(const char *str) {
    const char *s = str;
    while (*s) {  // Recorre la cadena hasta encontrar el '\0'
        s++;
    }
    return s - str;  // Devuelve la cantidad de caracteres entre el inicio y el final
}

int main() {
    printf("La logitud de %s es de %ld\n", CADENA, strlen(CADENA));
}