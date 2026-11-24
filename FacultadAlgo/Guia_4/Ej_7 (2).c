#include <stdio.h>

int main() {
    char cadena[101];  // Definimos un arreglo de 100 caracteres + 1 para el terminador '\0'
    
    printf("Introduce una cadena de caracteres (termina con 'n'):\n");
    
    // Leemos una línea completa usando fgets()
    fgets(cadena, 101, stdin);
    
    // Iteramos sobre la cadena hasta encontrar el carácter 'n' (inclusive)
    for(int i = 0; i < 101; i++) {
        if (cadena[i] == 'n') {
            cadena[i] = '\0';  // Reemplazamos 'n' por el terminador de cadena '\0'
            break;  // Terminamos el ciclo al encontrar 'n'
        }
    }
    
    // Imprimimos la cadena resultante
    printf("Cadena ingresada: %s\n", cadena);
    
    return 0;
}
