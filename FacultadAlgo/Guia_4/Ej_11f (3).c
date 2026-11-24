#include <stdio.h>

char *strcat(char *dest, const char *src) {
    char *ptr = dest;

    // Avanzar hasta el final de dest
    while (*ptr != '\0') {
        ptr++;
    }

    // Copiar src en dest a partir de la posición final
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    // Agregar el carácter nulo al final
    *ptr = '\0';

    return dest;
}

int main() {
    char str1[20] = "Hola, ";
    char str2[] = "mundo!";
    
    strcat(str1, str2);

    printf("%s\n", str1); // Salida: Hola, mundo!
    return 0;
}
