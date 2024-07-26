class Solution {
public:
    int mySqrt(int x) {
        long long low = 1, high = x;
        while(low <= high){
            long long mid = (low + high)/2;
            long long life_sucks = mid*mid;
            if(life_sucks <= x){
                low = mid +1;
            }
            else {
                high = mid-1;
            }
        }
        return high;
    }
};