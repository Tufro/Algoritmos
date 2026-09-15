#include "stdio.h"
#include "stdlib.h"
#define N 5

struct vector {
	int *vector;
	size_t longuitud;
};

typedef struct {
	int *vector;
	size_t longuitud;
} vector_t;

vector_t *vector_clonar(const vector_t *v) {
	if(!v) return NULL;

	vector_t  *a = malloc(sizeof(vector_t));
	if(!a) return NULL;

	a->longuitud = v->longuitud;

	a->vector = malloc(v->longuitud * sizeof(int));	
	if(!a->vector) {
		free(a);
		return NULL;
	}

	for(size_t i = 0; i < v->longuitud; i++) {
		a->vector[i] = v->vector[i];
	}

	return a;
}

int main() {
	vector_t  *v = malloc(sizeof(vector_t));
	if(!v) return 1;

	v->vector = malloc(N * sizeof(int));
	if(!v->vector) {
		free(v);
		return 1;
	}

	for(size_t i = 0; i < N; i++) {
		v->vector[i] = i * 5;
		printf("v[%zu] = %d ", i, v->vector[i]);
	}
	putchar('\n');
	v->longuitud = 2;

	vector_t  *m = vector_clonar(v);
	
	if(!m) return 1;

	printf("m->longuitud = %zu\n", m->longuitud);

	for(size_t i = 0; i < m->longuitud; i++) {
		printf("m[%zu] = %d ", i, m->vector[i]);	
	}
	putchar('\n');

	free(v->vector);
	free(v);
	
	free(m->vector);
	free(m);	

	return 0;
} 
