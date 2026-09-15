#include "stdio.h"

enum palo {
	ORO,
	ESPADA,
	BASTO,
	COPA
};

struct carta {
	int valor;
	enum palo palo;	
};

typedef struct carta carta_t;

carta_t *sacar_carta_del_mazo();

carta_t **tirar_reyes(size_t *n) {
	if(!n) return NULL;
	*n = 0;
	 
	while(1) {
		carta_t  *c = sacar_carta_del_mazo();

		
	}
	
	return ;	
}

int main() {

	return 0;
}
