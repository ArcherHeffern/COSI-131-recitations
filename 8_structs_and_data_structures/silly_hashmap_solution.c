#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct MapItem {
	int key;
	char* value;
	bool full;
};

struct MapItem hm[10] = { 0 }; // Sets everything to 0 in array. Hint: false == 0 and null == 0

bool insert(int key, char* value) {
	int index = key % 10;
	bool overwritten = hm[index].full;
	hm[index].key = key;
	hm[index].value = value;
	hm[index].full = true;
	return overwritten;
}

char* get(int key) {
	if (hm[key%10].key != key) {
		return NULL;
	}
	return hm[key%10].value;
}

int main() {
	printf("%s\n", get(1));
	insert(1, "Hello");
	printf("%s\n", get(1));
	insert(1, "World");
	printf("%s\n", get(1));
	insert(11, "Funky!");
	printf("%s\n", get(1));
	printf("%s\n", get(11));
}
