#include <stdio.h>

void collatz(int n);

int main() {
	collatz(12);
	collatz(19);
}

void collatz(int n) {
	if (n < 1) {
		return;
	}
	printf("%d, ", n);
	while (n > 1) {
		if (n % 2 == 0) {
			n = n/2;
		} else {
			n = n * 3 + 1;
		}
		printf("%d, ", n);
	}
	printf("\n");
}
