class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> lsum(n, 0);
        vector<int> rsum(n, 0);
        for(int i = 0, j = n-1; i < n &&  j>=0; i++, j--){
            lsum[i] = 0;
            for(int k = 0; k < i; k++){
                lsum[i] += nums[k];
            }
            rsum[i] = 0;
            for(int l = i + 1; l < n; l++){
                rsum[i] += nums[l];
            }
        }
        for(int i = 0; i < n; i++){
            nums[i] = abs(lsum[i] - rsum[i]);
        }

        return nums;
    }
};