#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Declara una cadena de caracteres con tamaño 100.

    printf("Introduce una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);  // Lee la cadena de caracteres con espacios.

    // Elimina el salto de línea (\n) al final de la cadena si existe
    str[strcspn(str, "\n")] = 0;

    // Verifica si la cadena está vacía
    if (strlen(str) == 0) {
        printf("La cadena está vacía.\n");
    } else {
        printf("La cadena no está vacía.\n");
    }

    return 0;
}
