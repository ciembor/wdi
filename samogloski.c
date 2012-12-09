#include <stdio.h>

int main() {
	// zmienna na znak z wejścia
	char character;
	// licznik samogłosek
	int counter = 0;
	// tablica samogłosek
	char vowels[] = {'a', 'e', 'i', 'j', 'o', 'u'};
	int i;

	// wczytujemy znak i od razu sprawdzamy, czy jest różny od 'k'
	// jeśli tak, kończymy pętlę
	while (scanf("%c", &character) && character != 'k') {
		// dla każdej samogłoski
		for (i = 0; i < sizeof vowels; ++i) {
			// jeśli wprowadzony znak jest tą samogłoską
			if (vowels[i] == character) {
				// zwiększ licznik o 1 i nie sprawdzaj reszty samogłosek
				++counter;
				break;
			}
		}
	}


	printf("Ilość samogłosek wynosi: %d\n", counter);

	return 0;
}
