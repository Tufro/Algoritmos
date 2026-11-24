#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];  // Definir un arreglo de caracteres para la cadena

    // Solicitar al usuario que ingrese una cadena
    printf("Introduce una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);  // Leer la cadena de caracteres

    // Eliminar el salto de línea que se agrega con fgets
    size_t longitud = strlen(cadena);
    if (longitud > 0 && cadena[longitud - 1] == '\n') {
        cadena[longitud - 1] = '\0';
    }

    // Imprimir la longitud de la cadena
    printf("La longitud de la cadena es: %zu\n", strlen(cadena));

    return 0;
}
