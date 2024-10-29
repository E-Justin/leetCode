// Runtime: 0ms (beats 100% of submissions)
// Memory Usage: 46.6MB

#include <stdio.h> // printf
#include <stdlib.h> // malloc
#include <stdbool.h> // bool

struct node {
	int val;
	struct node* next;
};

struct node* head = NULL;

bool
is_palindrome_ll(struct node* head) {
	int len = 0;
	unsigned char is_even = 0;
	bool ret = true;

	struct node* current = head;

	// get len
	while (current) {
		len++;
		current = current->next;
	}

  // check if len is even
	is_even = len % 2 == 0 ? 1 : 0;

	current = head;

  // allocate memory to hold 1/2 of llinked list, in array
	int* arr = (int*)malloc(sizeof(int) * len / 2);

  // idx to walk through array backwards
	unsigned int j = len / 2 - 1;

  // iterate through list
	for (int i = 0; i < len; i++) {

    // if we are at first half of list, assign values to array
		if (i < len / 2) arr[i] = current->val;

    // if not in middle of list || at second 1/2 of list
		else if (is_even || i > len / 2) {

      // if first half & second half of list dont match
			if (arr[j] != current->val) {
				ret = false; // no palindrome
				break; // exit loop
			}
			j--; // decrement array index
		}

    // move to next position in linked list
		current = current->next;
	}

	return ret;
}
