class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;   

        ListNode* dummy = new ListNode(0);
        dummy->next = head; 
        ListNode* temp = dummy;
        for (int i = 1; i < left; i++) {
            temp = temp->next;
        }
        ListNode* currentN = temp->next;
        ListNode* prevN = nullptr;
        ListNode* nextN = nullptr;

        for (int i = 0; i < right - left + 1; i++) {
            nextN = currentN->next;
            currentN->next = prevN;
            prevN = currentN;
            currentN = nextN;
        }
        temp->next->next = currentN;  
        temp->next = prevN;          

        return dummy->next;
    }
};
