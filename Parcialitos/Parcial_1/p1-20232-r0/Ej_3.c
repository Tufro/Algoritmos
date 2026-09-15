#include "stdio.h"
#include "stdlib.h"

int main() {
    char buffer[100];
    int minutos, tiempo, minutos_totales;

    printf("Ingrese los minutos del evento (0-45): ");
    fgets(buffer, sizeof(buffer), stdin);
    minutos = atoi(buffer);   // convierte string a int

    printf("Ingrese el tiempo (1 o 2): ");
    fgets(buffer, sizeof(buffer), stdin);
    tiempo = atoi(buffer);

    if (minutos >= 0 && minutos <= 45 && (tiempo == 1 || tiempo == 2)) {
        if (tiempo == 1) {
            minutos_totales = minutos;
        } else {
            minutos_totales = minutos + 45;
        }
        printf("El evento ocurrió en el minuto %d\n", minutos_totales);
    } else {
        fprintf(stderr, "Valores inválidos. Ingrese minutos entre 0-45 y tiempo 1 o 2.\n");
    }

    return 0;
}

