#include <stdio.h>

char *strinvertcase(char *str) {
    char *ptr = str; // Guardamos el puntero original para retornarlo
    while (*ptr) {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - ('a' - 'A'); // Convertimos a mayúscula
        } else if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + ('a' - 'A'); // Convertimos a minúscula
        }
        ptr++;
    }
    return str;
}

int main() {
    char str[] = "Hola, Mundo!"; // Cadena modificable
    printf("Original: %s\n", str);
    printf("Invertido: %s\n", strinvertcase(str));
    return 0;
}
