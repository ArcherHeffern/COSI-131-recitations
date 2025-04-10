#include <stdio.h>
#include <stdlib.h>

// Inspired by: https://github.com/firmianay/Life-long-Learner/blob/master/linux-kernel-development/chapter-6.md

struct Node {
	struct Node *prev;
	struct Node *next;
	int val;
};

void init_list_head(struct Node *head, int val) {
	head->prev = head;
	head->next = head;
	head->val = val;
}

void list_add(struct Node *head, struct Node *new) {
	struct Node *prev_next = head->next;
	head->next = new;
	new->prev = head;
	new->next = prev_next;
	prev_next->prev = new;
}

void list_del(struct Node *node) {
	struct Node *prev = node->prev;
	struct Node *next = node->next;
	prev->next = next;
	next->prev = prev;
}

void list_print(struct Node *head) {
	struct Node *cur = head;
	printf("%d -> ", cur->val);
	cur = cur->next;
	while (cur != head) {
		printf("%d -> ", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}

int main() {
	struct Node n1;	
	struct Node n2;	
	struct Node n3;	
	struct Node n4;	
	init_list_head(&n1, 1);
	init_list_head(&n2, 2);
	init_list_head(&n3, 3);
	init_list_head(&n4, 4);
	list_print(&n1); // 1 -> NULL
	list_add(&n1, &n2);
	list_print(&n1); // 1 -> 2 -> NULL
	list_add(&n2, &n4);
	list_print(&n1); // 1 -> 2 -> 4 -> NULL
	list_add(&n2, &n3);
	list_print(&n1); // 1 -> 2 -> 3 -> 4 -> NULL
	list_del(&n2);
	list_print(&n1); // 1 -> 3 -> 4 -> NULL
}
