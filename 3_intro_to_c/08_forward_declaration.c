#include <stdio.h>

// Must forware declare!
void function_declared_after_its_called(int x);

int main() {
    function_declared_after_its_called(5);
}

void function_declared_after_its_called(int x) {
    printf("Function passed %d\n", x);
}