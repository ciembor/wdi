

#include <stdio.h>
#include <math.h>

int main() {
	int number;
	int sum = 0;

	scanf("%d", &number);

	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	
	if (0 == sum % 9) {
		printf("Jest podzielna przez 9.\n");
	} else {
		printf("Nie jest podzielna przez 9.\n");
	}

	return 0;
}
