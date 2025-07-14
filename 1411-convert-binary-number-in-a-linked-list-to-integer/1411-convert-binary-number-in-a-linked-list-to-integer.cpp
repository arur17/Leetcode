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
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int answer = 0;
        int i = -1;
        ListNode *temp = head;
        while(temp != NULL){
            i++;
            temp = temp->next;
        }
        while (head != NULL){
            answer += ((head->val) * pow(2,i));
            i--;
            head = head->next;
        }
        return answer;
    }
};