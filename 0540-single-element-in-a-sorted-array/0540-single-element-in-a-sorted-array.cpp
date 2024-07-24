class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       map<int , int> mpp;
        for(int i : nums){
            mpp[i]++;
        }
        vector<int> singleOccurrences;  
        for (const auto& entry : mpp) {
            if (entry.second == 1) {
                singleOccurrences.push_back(entry.first);
            }
        }
        return singleOccurrences[0];

    }
};