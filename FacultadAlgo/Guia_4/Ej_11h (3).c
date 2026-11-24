#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    while (n--) {
        *d++ = *s++; // Copia byte a byte
    }

    return dest;
}

int main() {
    char    str[] = "Hola mundo",
            dest[10];
    memcpy(dest, str, 5);
    printf("%s\n", dest);

    return 0;
}
