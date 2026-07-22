class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        return(nums[nums.size()/2]);
        // int count = 0;
        // for(int i = 0; i < nums.size()-1; i++){
        //     if (nums[i] == nums[i+1]){
        //         count++;
        //     }
        //     if(count >= nums.size()/2){
        //         return nums[i];
        //     }
        // }
        // return -1;
    }
};