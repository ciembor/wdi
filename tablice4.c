#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i;

	scanf("%s", &str);
	int length = strlen(str);	

	// przechodzimy przez tablicę od początku, aż do środka
	for (i = 0; i < length / 2; ++i) {
		if (str[i] != str[length - i - 1]) {
			printf("To nie jest palindrom. \n");
			return 0;
		}
	}

	printf("To jest palindrom. \n");

	return 0;
}
