#include <stdio.h>

int main() {
	int tab[] = {1, 3, 6, 9, 8, 8, 9};
	int i;
	
	// sizeof(tab) / sizeof(int) to długość tablicy (jednostką wartości zwracanej przez sizeof jest bit, integer to nie jeden bit
	for (i = sizeof(tab) / sizeof(int) - 1; i >= 0; --i) {
		printf("%d, ", tab[i]);
	}

	return 0;
}
