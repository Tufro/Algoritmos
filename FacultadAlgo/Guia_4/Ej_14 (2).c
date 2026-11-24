#include <stdio.h>

typedef enum { false, true } bool_t;

// Función para verificar si un carácter es alfanumérico (sin ctype.h)
int es_alfanumerico(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

// Función para convertir un carácter a minúscula (sin ctype.h)
char a_minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');  // Convierte mayúscula en minúscula
    }
    return c;  // Si ya es minúscula o un número, lo deja igual
}

bool_t es_palindroma(const char *str) {
    if (!str) return false;  // Manejo de puntero NULL

    char clean_str[256];  // Buffer para almacenar la versión procesada
    int len = 0;

    // Preprocesado: eliminar caracteres no alfanuméricos y convertir a minúsculas
    for (int i = 0; str[i] && len < 255; i++) {
        if (es_alfanumerico(str[i])) {  // Verifica si es alfanumérico
            clean_str[len++] = a_minuscula(str[i]); // Convierte a minúscula
        }
    }
    clean_str[len] = '\0';  // Agregar terminador de cadena

    // Comprobación de palíndromo con dos punteros
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (clean_str[i] != clean_str[j]) {
            return false;  // No es palíndromo
        }
    }
    return true;  // Es palíndromo
}

int main() {
    const char tests[] = {"Anita lava la tina"};

    for (int i = 0; tests[i] != NULL; i++) {
        printf("\"%s\" %s un palíndromo.\n", 
            tests[i], es_palindroma(tests[i]) ? "es" : "no es");
    } 

    int         len = 0;

    while(tests[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        if (es_palindroma(tests) && i == len - 1) {
            printf("\"%s\" es palindromo\n", tests);
        } else if(!es_palindroma(tests) && i == len - 1) {
            printf("\"%s\" no es palíndromo.\n", tests);
        }
    }

    return 0;
}
