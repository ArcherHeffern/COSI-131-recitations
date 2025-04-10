#include <stdio.h>
#include <stdlib.h>

struct Point {
	int x;
	int y;
};

struct Rectangle {
	struct Point top_left;
	struct Point bottom_right;
};

struct Rectangle* create_rectangle(struct Point top_left, struct Point bottom_right) {
	struct Rectangle *r = malloc(sizeof(struct Rectangle));
	r->top_left = top_left;
	r->bottom_right = bottom_right;
	return r;
}

void destroy_rectangle(struct Rectangle *r) {
	free(r);
}

int get_rectangle_area(struct Rectangle *r) {
	return (r->bottom_right.x - r->top_left.x) * (r->top_left.y - r->bottom_right.y);
}

int main() {
	struct Point p1 = { .x=1, .y=2 };
	struct Point p2 = { .x=-5, .y=10 };
	struct Rectangle* r = create_rectangle(p1, p2);
	printf("rectangle r has an area of %d\n", get_rectangle_area(r));
	destroy_rectangle(r);
}
