#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"   
#define X 0
#define Y 0

void inicializar(bool tablero[8][8]) {
	int 		a = 0,
				l = 0,
				n = 0;

	while (a < 11) {
		if (tablero[l][n] != 1) {
			tablero[rand() % 8][rand() % 8] = 1;
		}
		a++;
		l++;
		n++;
	}

	for (int k = 0; k < 8; ++k) {
		for (int m = 0; m < 8; ++m) {
			printf("tablero[%d][%d] = %d\n", k, m, tablero[k][m]);
		}
	}
}

bool hay_mina(bool tablero[8][8], size_t x, size_t y) {
	for (int k = 0; k < 8; ++k) {
		for (int m = 0; m < 8; ++m) {
			if (tablero[m][k] == 1) {
				return true;
			} else {
				return false;
			}
		}
	}
}

int minas_linderas(bool tablero[8][8], size_t x, size_t y) {
	int    a = 0;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (tablero[x - i - 1][y - j - 1] == 1 && (i < x) && (j < y) && (x < i + 8) && (y < j + 8)) {
				a++;
			} 				
		}
	}
	return a;
}

int main() { 
	bool 		tablero[8][8];

	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			tablero[i][j] = 0;
		}
	}
	
	inicializar(tablero);

	hay_mina(tablero, X, Y);

	printf("a = %d\n",minas_linderas(tablero, X, Y));

    return 0;
}