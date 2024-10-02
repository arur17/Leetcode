/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         ListNode* temp = head;
//         ListNode* temp2 = head;
//         for(int i = 0; i< k; i++){
//             while(temp2->next != NULL){
//                 temp2 = temp2->next;
//             }
//             temp2->next = temp;
//             temp2->next = NULL;
//         }
//         return head;
//     }
// };
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;  
        ListNode* temp = head;
        int length = 1;  
        while (temp->next != NULL) {
            temp = temp->next;
            length++;
        }
        temp->next = head;
        k = k % length;  
        int stepsToNewHead = length - k;  
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        
        return newHead;
    }
};
