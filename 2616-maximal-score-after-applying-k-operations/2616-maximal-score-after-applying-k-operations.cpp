class Solution {
public:
    long long maxKelements(std::vector<int>& nums, int k) {
        long long max_score = 0;
        
        priority_queue<int> pq(nums.begin(), nums.end());
        
        while (k > 0) {
            int top = pq.top(); 
            pq.pop(); 
            max_score += top;
            int new_val = std::ceil((double)top / 3);  
            pq.push(new_val);
            k--;
        }
        
        return max_score;
    }
};