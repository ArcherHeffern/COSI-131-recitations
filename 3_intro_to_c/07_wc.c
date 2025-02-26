#include <stdio.h>

int OUTSIDE_WORD = 0;
int INSIDE_WORD  = 1;

int main() {
    char c;
    int nl = 0;
    int nw = 0;
    int nc = 0;
    int state = OUTSIDE_WORD;

    while ((c = getchar()) != EOF) {
        nc++;

        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUTSIDE_WORD;
        } else if (state == OUTSIDE_WORD) {
            state = INSIDE_WORD;
            nw++;
        }
        
        if (c == '\n') {
            nl++;
        }
    }

    printf("%d\t%d\t%d\n", nl, nw, nc);
}
