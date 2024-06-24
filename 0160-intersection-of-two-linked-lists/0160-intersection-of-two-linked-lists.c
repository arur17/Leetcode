/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int listcount(struct ListNode* head){
    int count = 0;
    while(head->next !=NULL){
        count++;
        head = head->next;
    }
    return count;
}
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *list1 = headA; // storing value for making the point equal
    struct ListNode *list2 = headB;

    struct ListNode *answer = NULL;
    //struct ListNode *list_2 = headB;

    int nA = listcount(headA);
    int nB = listcount(headB);
    int istrue = 0;
    if(nA > nB){
        nA = nA-nB;
        istrue = 1;
    }
    else{
        nB = nB-nA;
        istrue = 0;
    }
    if(istrue){
        int count = 0;
        while(count != nA){
            list1 = list1->next;
            count++;
        }
    }
    else{
        int count = 0;
        while(count != nB){
            list2 = list2->next;
            count++;
        }
    }
    while (list1 != NULL && list2 != NULL) {
      if (list1 == list2) {
        answer = list1;
        break;
    }
    list1 = list1->next;
    list2 = list2->next;
    }
    return answer;
}