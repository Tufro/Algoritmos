#include "stdio.h"
#define A 2

int main() {

	if(A < 0) {
		return printf("%d\n", -1);
	} else if (A == 0) {
		return printf("%d\n", 0);
	} else {
		return printf("%d\n", 1);
	}
}