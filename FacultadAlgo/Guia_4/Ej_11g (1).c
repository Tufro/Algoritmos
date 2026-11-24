#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d < s) {
        // Copia de izquierda a derecha (comportamiento normal)
        while (n--) {
            *d++ = *s++;
        }
    } else if (d > s) {
        // Copia de derecha a izquierda para evitar sobrescritura
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }
    return dest;
}

int main() {
    char str[] = "Hola mundo";
    memmove(str + 5, str, 4);  // Intenta mover "Hola" dentro de la misma cadena
    printf("%s\n", str);  // Salida esperada: "Hola Holado"
    return 0;
}
