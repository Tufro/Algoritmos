#include <stdio.h>
#include <stdbool.h>

bool extraer_columna_csv(const char csv[], char sep, size_t ncol, char col[]) {
	size_t	len = 0,
		num = 0,
		i = 0;

	while(csv[len] != '\0') {
		if(csv[len] == sep) {
			num++;
		} else if(num == ncol) {
			col[i++] = csv[len];	
		} 
		len++;
	}

	if(csv[0] == '\0'|| i == 0 || ncol > num) return false;
	
	col[i] = '\0';

	return true;
}

int main() {
	char	s[] = "papas|2kg|55.75";
	size_t	j = 0;	

	while(s[j] != '\0') j++;

	char	col[j];

	if(extraer_columna_csv(s, '|', 1, col)) {
		printf("\"%s\"\n", col);
	} else { 
		fprintf(stderr, "Fallo\n");
	}

	return 0;
}
