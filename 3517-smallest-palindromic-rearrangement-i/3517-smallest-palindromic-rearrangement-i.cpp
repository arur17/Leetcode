class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};
        for(char c : s){
            freq[c - 'a']++;
        }
        string left = "";
        for(int i = 0; i < 26; i++){
            left.append(freq[i] / 2, 'a' + i);
        }
        char middle = '\0';
        for(int i = 0; i<26; i++){
            if(freq[i] & 1){
                middle = ('a' + i);
                break;
            }
        }
        string right = left;
        reverse(right.begin(), right.end());
        if(middle != '\0'){
            left += middle;
        }
        left.append(right);
        return left;
    }
};