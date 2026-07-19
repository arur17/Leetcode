class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max1 = 0;
        int max_loop = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                max1++;
            }
            max_loop = max(max1, max_loop);
            if(nums[i] == 0){
                max1 = 0;
            }
        }
        return max_loop;

    }
};