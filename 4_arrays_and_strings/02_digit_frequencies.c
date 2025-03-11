#include <stdio.h>

int main() {
	int counts[10];
	// Initialize array to all zeros
	for (int i = 0; i < 10; i++) {
		counts[i] = 0;
	}

	// Read user input and increment counts until EOF reached
	char c;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			counts[c-'0']++;
		}
	}

	// Print digit frequencies
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d=%d, ", i, counts[i]);
	}
	printf("\n");
}
