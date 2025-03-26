#include <stdio.h>
#include <stdlib.h>

int* get_a() {
    int* a = malloc(sizeof(int));
    *a = 1;
    return a;
}

int main() {
    int *a = get_a();
    printf("%d\n", *a);
}