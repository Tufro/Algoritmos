#include "stdio.h"
#define X 5
#define Y 5

int main() {

    if (X > Y) {
        return printf("x es mayor que y\n");
    } else if (X == Y) {
        return printf("x y y son iguales\n");
    } else {
        return 0;
    }
}
