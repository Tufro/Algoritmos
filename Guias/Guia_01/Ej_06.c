#include <stdio.h>

double	diametro(double radio) {
	return  2.0 * radio;
}

double	circuferencia(double radio) {
	double	pi = 3.14159265358979323846;

	return  pi * diametro(radio);
}

double	area_base(double radio) { 	
	double	pi = 3.14159265358979323846;

	return pi * radio * radio;
}

double	volumen(double radio, double altura) {
	return area_base(radio) * altura;
}

double	area_cilindro(double radio, double altura) {
	return 2.0 * area_base(radio) + circuferencia(radio) * altura;
}

int main() {
	double	radio = 10.0,
		altura = 20.0;

	printf("Radio = %.2lf\n", radio);
	printf("Altura = %.2lf\n", altura);
	printf("Diametro = %.2lf\n", diametro(radio));
	printf("Circuferencia = %.2lf\n", circuferencia(radio));
	printf("Area de la base = %.2lf\n", area_base(radio));
	printf("Volumen = %.2lf\n", volumen(radio, altura));
	printf("Area del cilindro = %.2lf\n", area_cilindro(radio, altura));

	return 0;
}
