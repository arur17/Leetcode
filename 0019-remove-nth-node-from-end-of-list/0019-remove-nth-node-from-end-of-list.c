struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode* fast = &dummy;
    struct ListNode* slow = &dummy;
    
    
    for (int i = 0; i <= n; i++) {
        if (fast == NULL) {
            return NULL;
        }
        fast = fast->next;
    }
    
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    struct ListNode* toRemove = slow->next;
    slow->next = slow->next->next;

    return dummy.next;
}
