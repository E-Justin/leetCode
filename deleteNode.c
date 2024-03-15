// 3 ms
// 6.1 MB
#include <stdio.h>

void
deleteNode(struct node* node) {
	struct node *temp = node->next;

	node->data = temp->data;

	node->next = temp->next;

	return;
}
