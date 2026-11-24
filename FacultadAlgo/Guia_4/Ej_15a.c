#include "stdio.h"

char *strupper(char *str) {
    char *ptr = str; // Guardamos el puntero original para retornarlo
    while (*ptr) {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - ('a' - 'A'); // Convertimos a mayúscula manualmente
        }
        ptr++;
    }
    return str;
}

int main() {
    char str[] = "Hola, Mundo!"; // Cadena modificable
    printf("Original: %s\n", str);
    printf("Mayúsculas: %s\n", strupper(str));
    return 0;
}
