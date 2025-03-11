#include "stack.h"

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());
    printf("%d\n", peek());
    push(4);
    printf("%d\n", pop());
}