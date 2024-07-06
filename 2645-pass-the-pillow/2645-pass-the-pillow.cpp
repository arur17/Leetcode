class Solution {
public:
    int passThePillow(int n, int time) {
        // Each complete round (forward and backward) takes 2 * (n - 1) steps
        int roundLength = 2 * (n - 1);
        
        // Find the effective time within a single round
        int effectiveTime = time % roundLength;
        
        if (effectiveTime < n) {
            // If the effective time is less than n, the pillow is moving forward
            return effectiveTime + 1;
        } else {
            // If the effective time is >= n, the pillow is moving backward
            return 2 * n - effectiveTime - 1;
        }
    }
};
