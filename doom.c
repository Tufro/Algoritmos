#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ANCHO 10
#define ALTO  5

int main(void) {
    srand(time(NULL));

    char mapa[ALTO][ANCHO];
    int jugadorX = 0, jugadorY = 0;
    int enemigoX = rand() % ANCHO, enemigoY = rand() % ALTO;

    // inicializar mapa
    for (int y = 0; y < ALTO; y++) {
        for (int x = 0; x < ANCHO; x++) {
            mapa[y][x] = '.';
        }
    }

    mapa[jugadorY][jugadorX] = 'J';
    mapa[enemigoY][enemigoX] = 'E';

    char comando;
    while (1) {
        // imprimir mapa
        for (int y = 0; y < ALTO; y++) {
            for (int x = 0; x < ANCHO; x++) {
                printf("%c ", mapa[y][x]);
            }
            printf("\n");
        }

        printf("Mover (w/a/s/d) o disparar (f): ");
        scanf(" %c", &comando);

        // limpiar posición jugador
        mapa[jugadorY][jugadorX] = '.';

        if (comando == 'w' && jugadorY > 0) jugadorY--;
        else if (comando == 's' && jugadorY < ALTO-1) jugadorY++;
        else if (comando == 'a' && jugadorX > 0) jugadorX--;
        else if (comando == 'd' && jugadorX < ANCHO-1) jugadorX++;
        else if (comando == 'f') {
            if ((jugadorX == enemigoX && abs(jugadorY - enemigoY) <= 1) ||
                (jugadorY == enemigoY && abs(jugadorX - enemigoX) <= 1)) {
                printf("¡Enemigo eliminado!\n");
                break;
            } else {
                printf("Fallaste...\n");
            }
        }

        mapa[jugadorY][jugadorX] = 'J';
        mapa[enemigoY][enemigoX] = 'E';
    }

    return 0;
}

