class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct1 = 0;
        int ct2 = 0;
        int el1 = INT_MIN; 
        int el2 = INT_MIN;
        int n = nums.size();
        for(int i = 0; i<= n-1; i++){
            if(ct1 == 0 && nums[i] !=el2){
                ct1= 1;
                el1 = nums[i];
            }
            else if(ct2 == 0 && nums[i] !=el1){
                ct2= 1;
                el2 = nums[i];
            }
            else if(el1 == nums[i]) ct1++;
            else if(el2 == nums[i]) ct2++;
            else{
                ct1--;
                ct2--;
            }
        }
        vector<int> answer;
        ct1 = 0;
        ct2 = 0;
        for(int i=0; i<n; i++){
            if(el1 == nums[i]) ct1++;
            if(el2 == nums[i]) ct2++;
        }
        int mini = (int)n/3 + 1;
        if(ct1 >= mini){
            answer.push_back(el1);
        }
        if(ct2 >= mini){
            answer.push_back(el2);
        }
        return answer;
    }
};