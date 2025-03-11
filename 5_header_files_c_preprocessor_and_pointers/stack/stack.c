#include "stack.h"

int stack[1000];
int stack_size = 0;

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