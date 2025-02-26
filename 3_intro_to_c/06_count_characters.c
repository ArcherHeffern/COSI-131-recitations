#include <stdio.h>

int main() {
    char c;
    int count = 0;

    while ((c = getchar()) != EOF) {
        count++;
    }

    printf("%d\n", count);

	return 0;
}
