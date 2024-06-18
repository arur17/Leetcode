struct ListNode* oddEvenList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* odd = head;
    struct ListNode* even = head->next;
    struct ListNode* evenhead = head->next;
    while (even != NULL && even->next != NULL) {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next; // corrected this line to not skip nodes
    }
    odd->next = evenhead;
    return head;
}
