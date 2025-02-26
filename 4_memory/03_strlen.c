#include <stdio.h>

int string_length(char s[]);

int main() {
    char s[] = "Hello";
    printf("length of '%s' is %d\n", s, string_length(s));
}

int string_length(char s[]) {
    int l;
    for (l = 0; s[l] != 0; l++);
    return l;
}
