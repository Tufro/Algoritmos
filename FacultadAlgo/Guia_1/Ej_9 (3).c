#include "stdio.h"
#define A 153
#define B 140

int main() {

	if(A < B) {
		return printf("%d\n", -1);
	} else if (A == B) {
		return printf("%d\n", 0);
	} else {
		return printf("%d\n", 1);
	}
}