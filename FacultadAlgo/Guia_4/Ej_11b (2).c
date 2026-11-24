#include "stdio.h"
#define INICIO "Comida"

char *strcpy(char *dest, const char *src) {
    char *dest_ptr = dest;

    // Copia cada carácter desde src hasta encontrar el '\0'
    while (*src != '\0') {
        *dest = *src; // Copia el valor de src a dest
        dest++;       // Avanza el puntero de destino
        src++;        // Avanza el puntero de origen
    }

    *dest = '\0'; // Añade el carácter nulo al final de la cadena destino
    return dest_ptr; // Devuelve el puntero original de dest
}

int main() {
    const char *s = INICIO;

    while (*s) {  // Recorre la cadena hasta encontrar el '\0'
        s++;
    }
    char        dest[s - INICIO];

    strcpy(dest, INICIO);

    printf("%s\n", dest);
}