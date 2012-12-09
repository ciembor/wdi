#include <stdio.h>

int main() {
	// zmienna na dzielną 
	int number;
	int i;

	scanf("%d", &number);

	printf("\nLiczby z zakresu [0; 100], podzielne przez %d\n", number);
	for (i = 0; i <= 100; ++i) {
		// jeśli obecna liczba jest podzielna przez number
		if (0 == i % number) {
			printf("%d\n", i);
		}
	}

	printf("\nLiczby od 100 do 0, podzielne przez %d\n", number);
	for (i = 100; i >= 0; --i) {
		// jeśli obecna liczba jest podzielna przez number
		if (0 == i % number) {
			printf("%d\n", i);
		}
	}

	return 0;
}
