#include <stdio.h>

int stack[1000];
int stack_size = 0;

void push(int v);
int pop();
int peek();

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());
    printf("%d\n", peek());
    push(4);
    printf("%d\n", pop());
}

void push(int v) {
    stack[stack_size++] = v;
}

int pop() {
    stack_size--;
    return stack[stack_size];
}

int peek() {
    return stack[stack_size-1];
}