class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1, ans = INT_MAX;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[low] <= nums[mid]){
                ans = min(ans, nums[low]);
                low = mid+1;
            }
            else{
                ans = min(ans, nums[mid]);
                high = mid-1;
            }
        }
        return ans;
    }
};



/*
Extreme brute force.
int new_laptop_yee = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<new_laptop_yee){
                new_laptop_yee = nums[i];
            }
        }
        return new_laptop_yee;

*/