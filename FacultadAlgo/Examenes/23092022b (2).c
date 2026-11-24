#include "stdio.h"
#include "string.h"
#define CADENA "Emperador"

void es_inclusiva(char *cadena) {
    size_t      d = strlen(cadena),
                i = 0,
                n = 0;

    while (i < d) {
        if (cadena[i] == 'e') {
            n++;
            break;
        }
        i++;
    }

    if (n) {
        printf("%s contiene alguna letra e\n", cadena);        
    } else {
        printf("%s no contiene ninguna letra e\n", cadena);        
    }

}

int main() {

    es_inclusiva(CADENA);

    return 0;
}
