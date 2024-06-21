class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> final;
        for( int i = 0; i < (1 << n)  ; i++){
            vector<int> mid;
            for(int j=0; j<n; j++){
                if((i >> j) & 1){
                    mid.push_back(nums[j]);
                }
            }
            final.push_back(mid);
        }   
        return final;
    }
};