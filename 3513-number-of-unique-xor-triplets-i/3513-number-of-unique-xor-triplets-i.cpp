class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n == 0){
            return 0;
        }
        if (n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        int p = 1;
        while (p < n){
            p <<= 1;
        }
        if((n & (n - 1)) == 0){
            return p <<= 1;
        }
        return p;
    }
};