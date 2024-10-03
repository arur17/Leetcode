class Solution {
public:

    int minSubarray(vector<int>& nums, int p) {
        long total_sum = 0;
        for (int num : nums) {
            total_sum += num;
        }
        
        int target_remainder = total_sum % p;
        if (target_remainder == 0) {
            return 0; 
        }
        
        unordered_map<int, int> prefix_map;
        prefix_map[0] = -1;
        long prefix_sum = 0;
        int min_len = nums.size();
        
        for (int i = 0; i < nums.size(); ++i) {
            prefix_sum = (prefix_sum + nums[i]) % p;
            int required_remainder = (prefix_sum - target_remainder + p) % p;

            if (prefix_map.find(required_remainder) != prefix_map.end()) {
                min_len = min(min_len, i - prefix_map[required_remainder]);
            }
            prefix_map[prefix_sum] = i;
    }
     return (min_len < nums.size()) ? min_len : -1;
}

};