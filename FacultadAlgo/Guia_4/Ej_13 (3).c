#include "stdio.h"

char *invertir(char *str) {
    if (str == NULL) return NULL; // Manejo de puntero NULL

    // Calcular la longitud de la cadena manualmente
    char *inicio = str;
    char *fin = str;
    while (*fin) { // Avanzar hasta el final de la cadena
        fin++;
    }
    fin--; // Apuntar al último carácter válido

    // Intercambiar los caracteres
    while (inicio < fin) {
        // Intercambiar los valores
        char temp = *inicio;
        *inicio = *fin;
        *fin = temp;

        // Mover los punteros
        inicio++;
        fin--;
    }

    return str; // Retorna la cadena invertida
}

int main() {
    char str[] = "Hola, Mundo!";
    printf("Original: %s\n", str);

    invertir(str);
    printf("Invertida: %s\n", str);

    return 0;
}
