class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // Remove all odd numbers from the vector
        nums.erase(remove_if(nums.begin(), nums.end(), [](int num) { return num % 2 != 0; }), nums.end());

        // Use a map to count the frequency of each even number
        map<int, int> frequency;
        for (int num : nums) {
            frequency[num]++;
        }

        // Find the most frequent even number
        int mostFrequent = -1;
        int maxCount = 0;
        for (auto& entry : frequency) {
            if (entry.second > maxCount) {
                mostFrequent = entry.first;
                maxCount = entry.second;
            }
        }

        return mostFrequent;
    }
};
