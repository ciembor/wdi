#include <stdio.h>

int main() {
	// zmienna na znak z wejścia
	char character;
	// licznik znaków przestankowych 
	int counter = 0;
	// tablica znaków przestankowych
	char punctuations[] = {',', '.', ';', ':', '!', '?', '-'};
	int i;

	// wczytujemy znak i od razu sprawdzamy, czy jest różny od 'k'
	// jeśli tak, kończymy pętlę
	while (scanf("%c", &character) && character != 'k') {
		// dla każdego znaku przestankowego
		for (i = 0; i < sizeof punctuations; ++i) {
			// jeśli wprowadzony znak jest znakiem przstankowym
			if (punctuations[i] == character) {
				// zwiększ licznik o 1 i nie sprawdzaj reszty znaków przestankowych
				++counter;
				break;
			}
		}
	}


	printf("Ilość znaków przestankowych  wynosi: %d\n", counter);

	return 0;
}
