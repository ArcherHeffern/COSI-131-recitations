#include <stdio.h>

void array_reverse(int target[], int size);
void print_array(int target[], int size);

int main() {
	int target[] = {1, 2, 3, 4, 5};
	print_array(target, 5);
	array_reverse(target, 5);
	print_array(target, 5);
}

void array_reverse(int target[], int size) {
	int l = 0; 
	int r = size-1;
	while (l < r) {
		int tmp = target[l];
		target[l++] = target[r];
		target[r--] = tmp;
	}
}

void print_array(int target[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d, ", target[i]);
	}
	printf("\n");
}
