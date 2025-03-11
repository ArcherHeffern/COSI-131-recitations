#include <stdio.h>

void copy_array(int src[], int dest[], int size);
void print_array(int target[], int size);

int main() {
	int src[] = {1, 2, 3};
	int dest[3];

	print_array(dest, 3);
	copy_array(src, dest, 3);
	print_array(dest, 3);
}

void copy_array(int src[], int dest[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = src[i];
	}
}

void print_array(int target[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d, ", target[i]);
	}
	printf("\n");
}
