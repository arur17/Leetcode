class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    // Check if the input vector is empty
    if (strs.empty()) {
        return "";
    }

    // Sort the array of strings
    sort(strs.begin(), strs.end());

    // Initialize a string to store the result
    string result;

    // Convert the first and last strings in the sorted vector to char arrays
    const char* first = strs[0].c_str();
    const char* last = strs[strs.size() - 1].c_str();
    
    // Find the longest common prefix
    int minLen = min(strlen(first), strlen(last));
    for (int i = 0; i < minLen; ++i) {
        if (first[i] != last[i]) {
            break;
        }
        result += first[i];
    }

    return result;
}
};