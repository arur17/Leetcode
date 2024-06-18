int missingNumber(int* nums, int numsSize) {
    int n = numsSize;
    int expectedSum = n * (n + 1) / 2; // Sum from 0 to n
    int actualSum = 0;
    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }
    return expectedSum - actualSum;
}