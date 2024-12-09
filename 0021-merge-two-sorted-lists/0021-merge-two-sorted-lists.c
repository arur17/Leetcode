

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* temp3 = &dummy;
    dummy.next = NULL;

    struct ListNode* temp1 = list1;
    struct ListNode* temp2 = list2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val < temp2->val) {
            temp3->next = temp1;
            temp1 = temp1->next;
        } else {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }
    if (temp1 != NULL) {
        temp3->next = temp1;
    }
    if (temp2 != NULL) {
        temp3->next = temp2;
    }

    return dummy.next;
}
