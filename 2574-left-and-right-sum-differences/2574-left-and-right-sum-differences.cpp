class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int sum_as_we_go = 0;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i = 0; i < n; i++){
            total_sum = total_sum - nums[i];
            if(i != 0 ){
                sum_as_we_go = sum_as_we_go + nums[i-1];
            }
            ans[i] = abs(total_sum - sum_as_we_go);
        }
        return ans;
    }
};