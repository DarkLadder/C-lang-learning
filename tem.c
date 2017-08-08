#include <stdio.h>

/* Программа преобразования градусов */

int toFahr(int cels);
double toCels(double fahr);

void main() {
	double cel;
	cel = toCels(50);
	printf("%s %i %s\n", "20 Cels = ", toFahr(20), "Fahr");
	/*printf("%s %d %s\n", "50 Fahr = ", toCels(50.0), "Cels");*/
	printf("%d\n", cel);
}

int toFahr(int cels) {
	return ((9.0 * cels / 5.0) + 32);
}

double toCels(double fahr) {
	return (5.0 / 9.0 * fahr - 32);
}
