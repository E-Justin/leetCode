// Runtime: 0ms
// Memory: 10.7 MB

#include <stdlib.h>

struct node {
	int val;
	struct node* next;
};

struct node*
reverse_list(struct node* head) {
	struct node* current = head;
	struct node* prev = NULL;
	struct node* next = NULL;

	while (current) {
		next = current->next; // get next element
		current->next = prev; // point current to one before <-
		prev = current; // move prev -> by 1
		current = next; // move current -> by 1
	}

	head = prev;

	return head;
}
