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
    //return the vector from ll
    vector<int> convertLinkedListToVector(ListNode* head) {
        vector<int> v;
        while (head != nullptr) {
            v.push_back(head->val);
            head = head->next;
        }
        return v;
    }
    // return the ll from vector
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
    
    ListNode* mergeNodes(ListNode* head) {
      vector<int> inter =   convertLinkedListToVector(head);
      vector<int> ansVt;
      int sum = 0;
      for(int i = 0; i<inter.size(); i++){
        sum = sum + inter[i];
        if(inter[i] == 0 && sum != 0){
            ansVt.push_back(sum);
            sum = 0;
        }
      }
      ListNode *answer = convertVectorToLinkedList(ansVt);
      return answer;

    }
};