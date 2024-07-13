class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Start merging from the end to avoid overwriting elements in nums1
        int i = m - 1; // Index of last element in nums1's initial part
        int j = n - 1; // Index of last element in nums2
        int k = m + n - 1; // Index of last position in nums1

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If there are remaining elements in nums2
        while (j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};
