class Solution {
public:
    int numWaterBottles(int nB, int nE) {
       int n = nB;
       int rem;
       int sum = nB;
       while(n >= nE){
            rem = n%nE;
            n = n/nE;
            sum += n;
            n = rem + n;
       }
       return sum;
    }
};