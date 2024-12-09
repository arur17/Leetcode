

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // struct ListNode dummy;
    // struct ListNode* temp3 = &dummy;
    // dummy.next = NULL;

    // struct ListNode* temp1 = list1;
    // struct ListNode* temp2 = list2;

    // while (temp1 != NULL && temp2 != NULL) {
    //     if (temp1->val < temp2->val) {
    //         temp3->next = temp1;
    //         temp1 = temp1->next;
    //     } else {
    //         temp3->next = temp2;
    //         temp2 = temp2->next;
    //     }
    //     temp3 = temp3->next;
    // }
    // if (temp1 != NULL) {
    //     temp3->next = temp1;
    // }
    // if (temp2 != NULL) {
    //     temp3->next = temp2;
    // }

    // return dummy.next;

    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }

    if(list1->val < list2->val){
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}
