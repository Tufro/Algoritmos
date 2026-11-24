#include "stdio.h"

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2; // Diferencia entre los bytes
        }
        p1++;
        p2++;
    }
    return 0;
}

int main() {
    char    str[] = "Hola mundo",
            dest[] = "Hola planeta";

    printf("%d\n", memcmp(dest, str, 10));

    return 0;
}