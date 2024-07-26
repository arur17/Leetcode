class Solution {
public:
    long long time_taken(const std::vector<int>& arr, int hours) {
        long long total_hours = 0;
        for (int i = 0; i < arr.size(); i++) {
            total_hours += std::ceil((double)arr[i] / hours);
        }
        return total_hours;
    }

    int minEatingSpeed(std::vector<int>& piles, int h) {
        long long max_el = *max_element(piles.begin(), piles.end());
        int low = 1, high = max_el;

        while (low <= high) {
            int mid = (low + high) / 2;
            long long total_hours = time_taken(piles, mid);
            if (total_hours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};