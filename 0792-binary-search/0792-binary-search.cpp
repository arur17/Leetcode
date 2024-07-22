class Solution {
public:
    int bs(vector<int>& nums, int n, int target){
        int l = 0;
        int h = n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid] == target) return mid;
            else if (nums[mid] < target) l = mid+1;
            else h = mid-1;
        }
        return -1;
    } 
    int search(vector<int>& nums, int target) {
        return bs(nums, nums.size(), target);
    }
};