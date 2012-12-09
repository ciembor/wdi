#include <stdio.h>

int main() {
	//int tab[] = {1, 3, 6, 7, 8, 8, 9};
	int tab[] = {1, 3, 6, 9, 8, 8, 9};
	int i;
	int max = tab[0];
	int min = tab[0];
	
	// sizeof(tab) / sizeof(int) to długość tablicy (jednostką wartości zwracanej przez sizeof jest bit, integer to nie jeden bit
	for (i = 0; i < sizeof(tab) / sizeof(int)- 1; ++i) {
		
		if (tab[i] > max) {
			max = tab[i];
		}
		if (tab[i] < min) {
			min = tab[i];
		}
	}

	printf("Najmniejszy element: %d \nNajwiększy element: %d \n", min, max);

	return 0;
}
