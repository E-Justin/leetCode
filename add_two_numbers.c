#include <stdio.h>
#include <stdlib.h>

struct node {
	int val;
	struct node* next;
};

// 7ms : beats 94.55% of submissions
// 12.56 MB : beats 58.7% of submissions
struct node*
add_two_numbers(struct node* l1, struct node* l2) {

	//struct node* res_list = (struct node *)malloc(sizeof(struct node));
	struct node* res_list = NULL;
	struct node* end = NULL;
	unsigned int n_1 = 0;
	unsigned int n_2 = 0;

	struct node* current = l1;

	// get lengths of each list
	while (current) {
		n_1++;
		current = current->next;
	}

	current = l2;
	while (current) {
		n_2++;
		current = current->next;
	}

	int sum = 0;
	int carry = 0;

	// if both lists are the same size
	if (n_1 == n_2) {
		for (int i = 0; l1; i++) {

			struct node* new_node = (struct node*)malloc(sizeof(struct node));
			new_node->next = NULL;

      // get sum of the two values
			sum = carry + l1->val + l2->val;

      // check if a value needs to be carried over to the next position
			carry = sum >= 10 ? 1 : 0;

      // new node == sum or sum - 10, if sum is larger than 9
			new_node->val = carry ? sum - 10 : sum;
			new_node->next = NULL;

      // if first iteration, assign new head node
			if (i == 0) res_list = new_node;

      // else, new_node gets appended
			else end->next = new_node;

			end = i == 0 ? res_list : new_node;

      // move to next position
			l1 = l1->next;
			l2 = l2->next;
		}

	}
	// if lists have different lengths
	else {

    // navigate through the lists where they both have a value
		int smaller = n_1 < n_2 ? n_1 : n_2;

		for (int i = 0; i < smaller; i++) {

      // build new node
			struct node* new_node = (struct node*)malloc(sizeof(struct node));
			new_node->next = NULL;

			sum = carry + l1->val + l2->val;

      // check if there is a value to carry over to next position
			carry = sum >= 10 ? 1 : 0;

      //val == sum or sum - 10 (if sum is greater than 9)
			new_node->val = carry ? sum - 10 : sum;
			new_node->next = NULL;

      // if first iteration, assign new head node
			if (i == 0) res_list = new_node;
			else end->next = new_node;
			
			end = i == 0 ? res_list : new_node;

      // move to next position
			l1 = l1->next;
			l2 = l2->next;
		}

		// finish off with the rest of the longer list
		current = n_1 > n_2 ? l1 : l2;
		while (current) {
			struct node* new_node = (struct node*)malloc(sizeof(struct node));

			sum = carry + current->val;
			carry = sum >= 10 ? 1 : 0;

			new_node->val = carry ? sum - 10: sum;
			new_node->next = NULL;

			end->next = new_node;
			end = new_node;

			current = current->next;

		}

	}

  // if we have reached the end of both lists, and still have a value to carry over
	if (carry) {
		struct node* new_node = (struct node*)malloc(sizeof(struct node));

		new_node->val = 1;
		new_node->next = NULL;

		end->next = new_node;
	}

	return res_list;
}
