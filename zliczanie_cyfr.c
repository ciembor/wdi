#include <stdio.h>

int main() {
	// zmienna na znak z wejścia
	char character;
	// licznik cyfr 
	int counter = 0;

	// wczytujemy znak i od razu sprawdzamy, czy jest różny od 'k'
	// jeśli tak, kończymy pętlę
	while (scanf("%c", &character) && character != 'k') {
		// porównujemy znak '0', nie liczbę 0! Znak zero ma kod w ASCII o wartości 48
		// jeśli znak jest z zakresu [0; 9]
		if (character >= '0' && character <= '9') {
			++counter;
		}
	}


	printf("Ilość cyfr wynosi: %d\n", counter);

	return 0;
}
