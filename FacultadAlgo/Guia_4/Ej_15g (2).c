#include "stdio.h"

char *right_trim(char *str) {
    int len = strlen(str);
    while (len > 0 && (str[len - 1] == ' ' || str[len - 1] == '\t' || str[len - 1] == '\n')) {
        str[len - 1] = '\0'; // Reemplazamos los espacios al final con terminador de cadena
        len--;
    }
    return str;
}

int main() {
    char str[] = "   Hola, Mundo! bienvenidos a C.   "; // Cadena modificable con espacios al inicio y al final
    printf("Right Trim: '%s'\n", right_trim(str));
    return 0;
}