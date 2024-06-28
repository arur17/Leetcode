class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current); // Found a valid combination
            return;
        }
        
        for (int i = start; i < candidates.size(); ++i) {
            // Skip duplicates to avoid same subset with different orders
            if (i > start && candidates[i] == candidates[i - 1])
                continue;
            
            if (candidates[i] <= target) {
                current.push_back(candidates[i]);
                backtrack(candidates, target - candidates[i], i + 1, current, result);
                current.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // Sort to handle duplicates and enable skipping
        
        vector<vector<int>> result;
        vector<int> current;
        
        backtrack(candidates, target, 0, current, result);
        
        return result;
    }
};
