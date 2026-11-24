#include <stdio.h>
#include <stdint.h>
#include <math.h>

typedef uint8_t fp8_t;

int  comparar_fp8(fp8_t  a, fp8_t  b) {
	int	ma = a & 0x07,
		mb = b & 0x07,
		ea = (a >> 3) & 0x0f,
		eb = (b >> 3) & 0x0f,
		sa = (a >> 7) & 0x01,
		sb = (b >> 7) & 0x01,
		aa = (sa ? -1 : 1) * 2 * ea * ma,
		bb = (sb ? -1 : 1) * 2 * eb * mb;

	if(aa < bb) {
		return -1;	
	} else if(aa == bb) {
		return 0;
	} else {
		return 1; 
	}
}

int main() {
	fp8_t		x = 0x05,
			y = 0x08;
			
	printf("%d\n", comparar_fp8(x, y));

	return 0;
}
