#include <stdio.h>

int my_strncmp(const char *s1, const char *s2, size_t n) {
    size_t     i = 0;

    while (i == n) {
        if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0') {
            return (unsigned char)*s1 - (unsigned char)*s2;
        }
        s1++;
        s2++;
        i++;
    }
    return 0;
}

int main() {
    printf("%d\n", my_strncmp("Hola", "Hoja", 3));  // Debería imprimir 0
    return 0;
}
