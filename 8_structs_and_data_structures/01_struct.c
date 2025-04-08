#include <stdio.h>
#include <stdlib.h>

struct Point {
	int x;
	int y;
};

int main() {
	struct Point p1;
	p1.x = 5;
	p1.y = 4;

	struct Point p2 = { 
		.x = 1, 
		.y = 2 
	};

	// Heap allocated points
	struct Point *p3 = malloc(sizeof(struct Point));
	(*p3).x = 1;
	p3->y = 3; // Shorthand for above
}
