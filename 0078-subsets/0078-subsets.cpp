class Solution {
public:
    void rec(int index, int n , vector<int> arr, vector<int>&subset, vector<vector<int>>&ans){
        if(index == n) {
            ans.push_back(subset);
            return;
        }
        subset.push_back(arr[index]);
        rec(index+1, n, arr, subset, ans);
        subset.pop_back();
        rec(index+1, n, arr, subset, ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> subset;
        rec(0, n, nums, subset, ans);
        return ans;
    }
};