#include <stdio.h>
#include <string.h>

void invertir_cadena(char* cadena) {
    int inicio = 0;
    int fin = strlen(cadena) - 1;
    char temp;

    // Intercambiar los caracteres desde los extremos hacia el centro
    while (inicio < fin) {
        // Intercambiar los caracteres
        temp = cadena[inicio];
        cadena[inicio] = cadena[fin];
        cadena[fin] = temp;

        // Mover los índices
        inicio++;
        fin--;
    }
}

int main() {
    char texto[] = "Hola Mundo";
    
    printf("Cadena original: %s\n", texto);
    invertir_cadena(texto);
    printf("Cadena invertida: %s\n", texto);
    
    return 0;
}
