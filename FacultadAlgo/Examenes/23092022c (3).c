#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define N 100

void velocidad() {
    char        r[N],
                t[N];
    double      numerador,
                denominador;

    printf("La distancia recorrida en metros es: ");
    if (fgets(r, sizeof(r), stdin) != NULL) {
        numerador = atof(r);
    } else {
        // Si ocurre un error en la lectura
        printf("Error al leer la línea.\n");
    }

    printf("El tiempo recorrido en segundos es: ");
    if (fgets(t, sizeof(t), stdin) != NULL) {
        denominador = atof(t);
    } else {
        // Si ocurre un error en la lectura
        printf("Error al leer la línea.\n");
    }

    printf("La velocidad es de %lf m/s\n", numerador / denominador);
}

int main() {

    velocidad();

    return 0;
}
