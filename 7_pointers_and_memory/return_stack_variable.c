#include <stdio.h>

int* get_a() {
    int a = 0;
    return &a;
}

int main() {
    int *a = get_a();
    printf("%d\n", *a);
}
