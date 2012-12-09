/* Obliczyć ilość / sumę cyfr parzystych / nieparzystych występujących w danej liczbie */

#include <stdio.h>

int main() {
	// wprowadzana liczba
	int number;
	// suma cyfr parzystych
	int sum_even = 0;
	// suma cyfr nieparzystych
	int sum_odd = 0;
	// aktualna cyfra
	int digit;

	scanf("%d", &number);

	// w każdym kroku pętli ściągamy do zmiennej digit ostatnią cyfrę
	while (number > 0) {
		// zapisujemy ostatnią cyfrę do digit
		digit = number % 10;
		// jeśli digit nie jest parzyste, zwiększamy sumę nieparzystyci i analogicznie dla parzystych
		if (digit % 2 != 0) {
			sum_odd += digit;
		} else {
			sum_even += digit;
		}
		// "ucinamy" ostatnią cyfrę
		number /= 10;
	}

	printf("Suma liczb parzystych wynosi %d\n", sum_even);
	printf("Suma liczb nieparzystych wynosi %d\n", sum_odd);

	return 0;
}
