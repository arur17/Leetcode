

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int count_el(struct ListNode* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL) return NULL; 
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    
    int count = count_el(head);
    int middleIndex = count / 2; 

    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    for (int i = 0; i < middleIndex; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (prev != NULL) {
        prev->next = temp->next;
    }
    free(temp);

    return head;
}
