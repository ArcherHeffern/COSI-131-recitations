#include <stdio.h>

void div(int* target, int divisor) {
	*target = *target / divisor;
}

int main() {
	int target = 4;
	int divisor = 2;
	printf("%d\n", target);
	div(&target, divisor);
	printf("%d\n", target);
}
