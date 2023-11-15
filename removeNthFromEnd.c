struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* current = head;
    
    // get length of list
    current = head;
    int len = 0;

    while (current) {
        len++;
        current = current->next;
    }

    current = head;
    // if head node is to be deleted
    if (len == n) {
        head = head->next;
        current = NULL;
        free(current);
        return head;
    }



    // move to position before the one to be deleted
    int target = len - (n + 1);

    current = head;
    for (int i = 0; i < target; i++) {
        current = current->next;
    }


    current->next = current->next->next;

    return head;
}
