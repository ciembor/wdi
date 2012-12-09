/* Obliczyć ilość cyfr x (1,2,...) występujących w danej liczbie */

#include <stdio.h>
#include <math.h>

int main() {
	// wprowadzana liczba
	int number;
	int counter = 0;
	int digit;

	printf("Podaj liczbę: ");
	scanf("%d", &number);

	printf("Podaj cyfrę: ");
	scanf("%d", &digit);

	// jeśli wprowadzona liczba to 0, jest jedna cyfra (0)
	if (0 == number && 0 == digit) {
		counter = 1;
	} else {

		while (number > 0) {
			// jeżeli to ta cyfra
			if (digit == number % 10) {
				// zwiększamy licznik
				++counter;
			}
			// "ucinamy" ostatnią cyfrę
			number /= 10;
		}
	}

	printf("Ilość cyfr %d: %d\n", digit, counter);

	return 0;
}
