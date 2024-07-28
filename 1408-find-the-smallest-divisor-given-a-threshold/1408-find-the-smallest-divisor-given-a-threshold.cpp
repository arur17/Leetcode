class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sum(nums, mid) <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

private:
    int sum(vector<int>& nums, int mid) {
        int summm = 0;
        for (int i = 0; i < nums.size(); i++) {
            summm += ceil(static_cast<double>(nums[i]) / mid);
        }
        return summm;
    }
};