#include <stdio.h>

void reverse(char* s) {
	if (*s == 0) // Can be replaced with end--; (Move to after end declaration)
		return;

	// Find the end of s
	char* end = s;
	while (*(end+1) != 0) {
		end++;
	}

	// Move both pointers to center of string while reversing characters
	while (s < end) {
		char tmp = *s;
		*s = *end;
		*end = tmp;
		s++;
		end--;
	}
}

int main() {
	char s[] = "Tacocat";
	printf("%s\n", s);
	reverse(s);
	printf("%s\n", s);
}
