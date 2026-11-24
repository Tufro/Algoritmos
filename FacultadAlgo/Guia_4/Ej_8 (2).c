#include <stdio.h>

int main() {
    char cadena[101];  // Definimos un arreglo de 100 caracteres + 1 para el terminador '\0'

    printf("Introduce una cadena de caracteres:\n");
    
    // Leemos una línea completa utilizando fgets
    fgets(cadena, 101, stdin);
    
    // Imprimimos el encabezado de la tabla
    printf("Posición\tCarácter\tCódigo ASCII\n");
    
    // Iteramos a través de la cadena hasta el terminador '\0'
    for (int i = 0; cadena[i] != '\0'; i++) {
        // Imprimimos la posición, el carácter y el código ASCII correspondiente
        printf("%d\t\t%c\t\t%d\n", i, cadena[i], (int)cadena[i]);
    }
    
    return 0;
}