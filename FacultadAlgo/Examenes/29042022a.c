#include "stdio.h"
#include "string.h"
#define CADENA "   hola mundo "

void left_trim(char cadena[]) {
    size_t      i = 0,
                d = strlen(cadena);
    char        aaa[d];

    while(cadena[i] == ' ') {
        i++;
    }

    for (int n = 0; n < d; ++n) {
        aaa[n] = cadena[n + i];
    }

    printf("%s\n", aaa);
}

int main() {

    left_trim(CADENA);

    return 0;
}
