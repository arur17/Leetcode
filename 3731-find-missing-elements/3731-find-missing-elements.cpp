class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> ans;

        for (int i = min; i <= max; i++) {
            if (!s.count(i))
                ans.push_back(i);
        }

        return ans;

    }
};