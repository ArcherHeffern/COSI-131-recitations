#include <stdio.h>

static int* array;
static int size;
static int capacity;

void array_initialize(int _capacity) {

}

void array_free() {

}

void array_print() {

}

void array_insert(int value) {

}

int main() {
    array_initialize(2);
    array_insert(1);
    array_insert(2);
    array_print();
    array_insert(3);
    array_print();
    array_free();
}