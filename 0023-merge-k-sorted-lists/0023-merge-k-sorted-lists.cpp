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
    ListNode* convertVectorToLinkedList(vector<int>& v) {
    if (v.empty()) {
        return nullptr;
    }

    ListNode* head = new ListNode();
    head->val = v[0];
    head->next = nullptr;

    ListNode* current = head;
    for (size_t i = 1; i < v.size(); ++i) {
        ListNode* newNode = new ListNode();
        newNode->val = v[i];
        newNode->next = nullptr;
        current->next = newNode;
        current = newNode;
    }

    return head;
}

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> allValues;
        for(int i =0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                allValues.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(allValues.begin(), allValues.end());
        ListNode* Answer = convertVectorToLinkedList(allValues);
        return Answer;
    }
};