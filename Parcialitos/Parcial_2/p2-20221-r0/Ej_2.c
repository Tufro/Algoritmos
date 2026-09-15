#include "stdio.h"
#include "stdlib.h"

typedef struct {
	char	*nombre,
		*apellido;
	int	dni;
} persona_t;

persona_t *persona_clonar(const persona_t *p) {
	if(!p) return NULL;

	persona_t  *clon  = malloc(sizeof(persona_t));
	if(!clon) return NULL;

	size_t	len_n = 0;

	while(p->nombre[len_n]) len_n++;

	clon->nombre = malloc(len_n + 1);
	
	if(!clon->nombre) {
		free(clon);
		return NULL;
	}

	for(size_t i = 0; i < len_n; i++) clon->nombre[i] = p->nombre[i];
	
	clon->nombre[len_n] = '\0';

	size_t len_a = 0;

	while(p->apellido[len_a]) len_a++;
	
	clon->apellido = malloc(len_a + 1);
	if(!clon->apellido) {
		free(clon->nombre);
		free(clon);
		return NULL;
	}

	for(size_t j = 0; j < len_a; j++) clon->apellido[j] = p->apellido[j];

	clon->apellido[len_a] = '\0';

	clon->dni = p->dni;

	return clon;
}

void persona_destruir(persona_t *p) {
	if(!p) return;
	free(p->nombre);
	free(p->apellido);
	free(p);
}

int main() {
 	persona_t	original;

	original.nombre = "Hugo";
	original.apellido = "Bonavera";	
	original.dni = 40987213;

	persona_t *final = persona_clonar(&original);

	printf("Nombre: %s\n", final->nombre);
	printf("Apellido: %s\n", final->apellido);
	printf("DNI: %d\n", final->dni);

	persona_destruir(final);

	return 0;
}
