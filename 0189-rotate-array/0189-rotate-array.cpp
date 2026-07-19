class Solution {
public:
    void swap(vector<int>& nums, int l, int r){
        while(l<r){
            int t = nums[r];
            nums[r] = nums[l];
            nums[l] = t;
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n <=1) return; 
        k = k % n;
        if(k == 0) return;

        swap(nums, 0, n-1);
        swap(nums, 0, k-1);
        swap(nums, k, n-1);
    }

};