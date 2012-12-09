#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	// licznik samogłosek
	int counter = 0;
	// tablica samogłosek
	char vowels[] = {'a', 'e', 'i', 'j', 'o', 'u'};
	int i, j;
	int length;

	scanf("%s", &str);
	length = strlen(str);

	for (i = 0; i < length; ++i) {
		// dla każdej samogłoski
		for (j = 0; j < sizeof vowels; ++j) {
			// jeśli wprowadzony znak jest tą samogłoską
			if (vowels[j] == str[i]) {
				// zwiększ licznik o 1 i nie sprawdzaj reszty samogłosek
				++counter;
				break;
			}
		}
	}


	printf("Ilość samogłosek wynosi: %d\n", counter);

	return 0;
}
