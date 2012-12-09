#include <stdio.h>

int main() {
	//int tab[] = {1, 3, 6, 7, 8, 8, 9};
	int tab[] = {1, 3, 6, 9, 8, 8, 9};
	int i;
	
	// sizeof(tab) / sizeof(int) to długość tablicy (jednostką wartości zwracanej przez sizeof jest bit, integer to nie jeden bit
	for (i = 0; i < sizeof(tab) / sizeof(int) - 1; ++i) {
		
		// czy element jest mniejszy bądź równy od jego następnika?
		if (tab[i] > tab[i + 1]) {
			printf("Tablica nie jest posortowana rosnąco.\n");
			return 0;
		}
	}
	// wszystkie iteracje pętli przeszły bez wykonania warunku, więc
	printf("Tablica jest posortowana rosnąco.\n");

	return 0;
}
