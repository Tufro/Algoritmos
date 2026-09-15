#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char buffer[100];
    int	i = 0;
    int c;

    printf("Ingrese un número: ");

    // Leer caracteres hasta Enter o fin de buffer
    while ((c = getchar()) != '\n' && c != EOF && i < sizeof(buffer) - 1) {
        buffer[i++] = (char)c;
    }
    buffer[i] = '\0';  // terminar la cadena

    double numero = atof(buffer);  // convertir a double

    if (numero >= 0) {
        double raiz = sqrt(numero);
        printf("La raíz cuadrada de %.2f es %.2f\n", numero, raiz);
    } else {
        printf("No es posible calcular la raíz cuadrada de un número negativo.\n");
    }

    return 0;
}
