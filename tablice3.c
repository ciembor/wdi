#include <stdio.h>

int main() {
	int tab[] = {1, 3, 6, 9, 8, 8, 9};
	int i, swap;
	int length = sizeof(tab) / sizeof(int);	
	// sizeof(tab) / sizeof(int) to długość tablicy (jednostką wartości zwracanej przez sizeof jest bit, integer to nie jeden bit

	// przechodzimy przez tablicę od początku, aż do środka
	for (i = 0; i < length / 2; ++i) {
		// zapisujemy w pamięci podręcznej wartość bieżącego elementu
		swap = tab[i];
		// bieżący element zostaje zastąpiony przez symetryczny element
		tab[i] = tab[length - i - 1];
		// symetryczny element zostaje zastąpiony wartością z pamięci podręcznej
		tab[length - i - 1] = swap;
	}

	// wypisanie tablicy na ekran
	for (i = 0; i < length; ++i) {
		printf("%d \n", tab[i]);
	}

	return 0;
}
