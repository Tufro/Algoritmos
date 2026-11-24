#include "stdio.h"
#include "math.h"
#define A 1.0
#define B 1.0
#define C 0.0
#define D 1.0

int main() {
    double      x = (- B - sqrt(pow(B, 2) - 4 * A * (C - D)) / (2 * A)),
                y = (- B + sqrt(pow(B, 2) - 4 * A * (C - D)) / (2 * A));

    if (pow(B, 2) < 4 * A * (C - D)) {
        return printf("Raiz compleja");
    } else {
        return printf("Dado el polinomio %lfx^2 + %lfx + %lf = %lf y sus raices son %lf y %lf\n", A, B, C, D, x, y);
    }           
}

