#include <stdio.h>
#include <stdlib.h>

static int* array;
static int size;
static int capacity;

void array_initialize(int _capacity) {
    array = malloc(_capacity * sizeof(int));
    size = 0;
    capacity = _capacity;
}

void array_free() {
    free(array);
}

void array_print() {
    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

void array_insert(int value) {
    if (size == capacity) {
        capacity *= 2;
        int* new_array = malloc(capacity * sizeof(int));
        for (int i = 0; i < size; i++) {
            new_array[i] = array[i];
        }
        free(array);
        array = new_array;
    }
    array[size++] = value;
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