class Solution {
public:
    int findMin(vector<int>& nums) {
        int new_laptop_yee = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<new_laptop_yee){
                new_laptop_yee = nums[i];
            }
        }
        return new_laptop_yee;
    }
};