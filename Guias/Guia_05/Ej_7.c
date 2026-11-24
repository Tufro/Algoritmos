#include <stdio.h>

int main(int argc, char *argv[]) {
    int reverse = 0;
    int start = 1;

    // Verificamos si el primer argumento es -r
    if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'r' && argv[1][2] == '\0') {
        reverse = 1;
        start = 2;
    }

    // Ordenamiento burbuja sobre argv[start..argc-1]
    for (int i = start; i < argc - 1; i++) {
        for (int j = i + 1; j < argc; j++) {
            // Comparación manual de cadenas
            const char *a = argv[i];
            const char *b = argv[j];
            while (*a && (*a == *b)) {
                a++;
                b++;
            }
            int cmp = (unsigned char)*a - (unsigned char)*b;

            if ((!reverse && cmp > 0) || (reverse && cmp < 0)) {
                char *tmp = argv[i];
                argv[i] = argv[j];
                argv[j] = tmp;
            }
        }
    }

    // Imprimir resultados
    for (int i = start; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}

