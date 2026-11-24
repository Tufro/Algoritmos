#include <stdio.h>

int strncasecmp(const char *s1, const char *s2, size_t n) {
    while (n >= sizeof(size_t)) {
        size_t chunk1 = *(const size_t *)s1;
        size_t chunk2 = *(const size_t *)s2;

        if (chunk1 != chunk2) break;

        s1 += sizeof(size_t);
        s2 += sizeof(size_t);
        n -= sizeof(size_t);
    }

    while (n--) {
        unsigned char c1 = (unsigned char) *s1;
        unsigned char c2 = (unsigned char) *s2;

        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;

        if (c1 != c2 || !c1 || !c2) {
            return c1 - c2;
        }

        s1++;
        s2++;
    }
    return 0;
}

int main() {
    char s1[] = "Hola Mundo";
    char s2[] = "hola";

    if (strncasecmp(s1, s2, 4) == 0) {
        printf("Las primeras 4 letras son iguales (sin distinción de mayúsculas).\n");
    } else {
        printf("Las primeras 4 letras son diferentes.\n");
    }

    return 0;
}