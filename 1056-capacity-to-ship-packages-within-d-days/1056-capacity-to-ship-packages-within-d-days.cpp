class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canShip(weights, days, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
private:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int total = 0;
        int days_needed = 1;  // Start with the first day

        for (int weight : weights) {
            if (total + weight > capacity) {
                days_needed++;
                total = weight;
                if (days_needed > days) {
                    return false;
                }
            } else {
                total += weight;
            }
        }

        return true;
    }    
};