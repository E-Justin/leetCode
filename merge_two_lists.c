//Runtime: 3ms
//Memory: 11.02 MB

#include <stdio.h> // printf
#include <stdlib.h> // malloc/free

struct node {
	int val;
	struct node* next;
};

void
append_node(struct node** head, int data) {

	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->val = data;
	new_node->next = NULL;

	if (!(*head)) {
		(*head) = new_node;

	}
	else {
		struct node* current = (*head);

		while (current->next) {
			current = current->next;
		}

		current->next = new_node;

	}
	return;
};

struct node*
merge_two_lists(struct node* list1, struct node* list2) {
	struct node* ret = NULL;
	
	// run through both lists
	while (list1 && list2) {

		// if list1's element is less than list2's
		if (list1->val < list2->val) {
			append_node(&ret, list1->val);
			list1 = list1->next;
		}
		else { // list2's element is less than list1
			append_node(&ret, list2->val);
			list2 = list2->next;
		}
	}

	// run through remaining elements
	while (list1) {
		append_node(&ret, list1->val);
		list1 = list1->next;
	}
	while (list2) {
		append_node(&ret, list2->val);
		list2 = list2->next;
	}

	return ret;
}
