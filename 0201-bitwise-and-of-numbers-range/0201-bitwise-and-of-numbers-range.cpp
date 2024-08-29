class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int life_sucksssssssss = 0;
        while (left < right) { // maybe till they equal.
            left >>= 1;
            right >>= 1;
            life_sucksssssssss++;
        }
        return left << life_sucksssssssss;
    }
};
