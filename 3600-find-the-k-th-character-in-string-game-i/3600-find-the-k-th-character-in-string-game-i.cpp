class Solution {
public:
    char kthCharacter(long long k) {
        long long current_size = 1;
        while (current_size < k) {
            current_size *= 2;
        }

        long long changes = 0;
        while (k > 1) {
            long long half = current_size / 2;

            if (k > half) {
                k -= half;
                changes++;
            }

            current_size = half;
        }

        char result = (changes % 26) + 'a';
        return result;
    }
};
