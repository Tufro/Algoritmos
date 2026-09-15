#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main() {
    char buffer[100];
    double m, k, T;

    printf("Ingrese masa: ");
    fgets(buffer, sizeof(buffer), stdin);
    m = atof(buffer);   // convierte string a double

    printf("Ingrese constante k: ");
    fgets(buffer, sizeof(buffer), stdin);
    k = atof(buffer);

    if (m > 0 && k > 0) {
        T = 2 * acos(-1.0) * sqrt(m / k);
        printf("Periodo: %lf\n", T);
    } else {
        fprintf(stderr, "Valores inválidos. Masa y constante deben ser positivas.\n");
    }

    return 0;
}
