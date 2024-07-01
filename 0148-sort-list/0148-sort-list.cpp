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
        void mergeTheArray(vector<int> &nums,int low,int mid,int high){
            vector<int> temp;
            int left = low;
            int right = mid+1;
            while(left <= mid && right <= high){
                if(nums[left] <= nums[right]){
                    temp.push_back(nums[left]);
                    left++;
                }
                else{
                    temp.push_back(nums[right]);
                    right++;
                }
            }    
            while(left <= mid){
                temp.push_back(nums[left]);
                left++;
            }
            while(right <= high){
                temp.push_back(nums[right]);
                right++;
            }
            for(int i = low; i <= high; i++){
                nums[i] = temp[i-low];
            }
        }

        void mergeSort(vector<int> &nums, int low, int high){
            if(low >= high){
                return;
            }
            int mid = (low + high)/ 2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid+1, high);
            mergeTheArray(nums, low, mid, high);
        }
    vector<int> convertLinkedListToVector(ListNode* head) {
        vector<int> v;
        while (head != nullptr) {
            v.push_back(head->val);
            head = head->next;
        }
        return v;
    }
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

    ListNode* sortList(ListNode* head) {
        vector<int> intermidiate = convertLinkedListToVector(head);
        mergeSort(intermidiate, 0, intermidiate.size()-1);
        ListNode* answer = convertVectorToLinkedList(intermidiate);
        return answer;
        
    }
};