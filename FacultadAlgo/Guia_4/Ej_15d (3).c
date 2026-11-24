#include "stdio.h"

char *titlecase(char *str) {
    char *ptr = str; // Guardamos el puntero original para retornarlo
    int new_word = 1; // Indicador de nueva palabra
    while (*ptr) {
        if (*ptr >= 'a' && *ptr <= 'z' && new_word) {
            *ptr = *ptr - ('a' - 'A'); // Convertimos a mayúscula
            new_word = 0;
        } else if (*ptr >= 'A' && *ptr <= 'Z' && !new_word) {
            *ptr = *ptr + ('a' - 'A'); // Convertimos a minúscula
        } else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n') {
            new_word = 1; // Reiniciamos el indicador al encontrar un espacio
        }
        ptr++;
    }
    return str;
}

int main() {
    char str[] = "Hola, Mundo! bienvenidos a C."; // Cadena modificable
    printf("Original: %s\n", str);
    printf("Title Case: %s\n", titlecase(str));
    return 0;
}