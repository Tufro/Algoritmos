#include <stdio.h>

int main() {
    int entero;
    double decimal;
    char caracter;
    int arreglo[10];

    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(size_t) = %zu\n", sizeof(size_t));

    printf("sizeof(entero) = %zu\n", sizeof(entero));
    printf("sizeof(decimal) = %zu\n", sizeof(decimal));
    printf("sizeof(caracter) = %zu\n", sizeof(caracter));

    printf("sizeof(arreglo) = %zu\n", sizeof(arreglo));
    printf("sizeof(arreglo[0]) = %zu\n", sizeof(arreglo[0]));
    printf("Cantidad de elementos en arreglo = %zu\n",
           sizeof(arreglo) / sizeof(arreglo[0]));

    return 0;
}

