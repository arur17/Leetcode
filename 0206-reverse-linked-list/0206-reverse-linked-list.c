/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode *prevP = NULL;
    struct ListNode *currentP = head;
    struct ListNode *nextP = head->next;
    while(currentP){
        currentP->next = prevP;
        prevP= currentP;
        currentP = nextP;
        if(nextP) nextP=nextP->next;
    }
    return prevP;
}