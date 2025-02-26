#include <stdio.h>

void copy_array(int src[], int src_len, int dest[], int dest_len);

int main() {
	int arr1[] = {1, 2, 3};
	int arr2[] = {4, 5, 6, 7};

	copy_array(arr1, 3, arr2, 4);

	for (int i = 0; i < 4; i++) {
		printf("%d, ", arr2[i]);
	}
	printf("\n");
}

void copy_array(int src[], int src_len, int dest[], int dest_len) {
	int copy_count = src_len < dest_len ? src_len: dest_len;
	for (int i = 0; i < copy_count; i++) {
		dest[i] = src[i];
	}
}