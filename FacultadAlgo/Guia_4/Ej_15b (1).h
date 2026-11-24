#include "stdio.h"

char *strlower(char *str) {
    char *ptr = str; // Guardamos el puntero original para retornarlo
    while (*ptr) {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + ('a' - 'A'); // Convertimos a minúscula manualmente
        }
        ptr++;
    }
    return str;
}

int main() {
    char str[] = "Hola, Mundo!"; // Cadena modificable
    printf("Original: %s\n", str);
    printf("Minúsculas: %s\n", strlower(str));
    return 0;
}
