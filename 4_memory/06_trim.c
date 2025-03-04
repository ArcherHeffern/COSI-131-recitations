#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_whitespace(char c);
void trim(char s[]);


int main() {
    char s[] = "   four score\t   ";
    printf("'%s'\n", s);
    trim(s);
    printf("'%s'\n", s);
}


bool is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}


void trim(char s[]) {
    int start = 0;
    int cur = 0;
    
    // Remove leading whitespace
    while (is_whitespace(s[cur]) && s[cur] != '\0') {
        cur++;
    }
    while (s[cur] != '\0') {
        s[start] = s[cur];
        start++;
        cur++;
    }

    // Remove trailing whitespace
    cur--;
    while (is_whitespace(s[cur]) && cur >= 0) {
        s[cur] = 0;
        cur--;
    }
}