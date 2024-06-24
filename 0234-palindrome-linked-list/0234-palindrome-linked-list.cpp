class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* move = head;
        ListNode* tail = head;
        ListNode* prev = nullptr;
        do  
        {
            tail = new ListNode(move->val);
            tail->next = prev;
            prev = tail;
            move = move->next;
        } while (move != nullptr);

        while (head->next != nullptr && tail->next != nullptr) 
        {

            if (head->val != tail->val) 
                return false;
            head = head->next;
            tail = tail->next;
        }
        return true;
    }
};