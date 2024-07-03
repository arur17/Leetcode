class Solution {
public:
    bool backspaceCompare(string s, string t) {
        auto process = [](const string &str) {
            string result;
            for (char c : str) {
                if (c == '#') {
                    if (!result.empty()) {
                        result.pop_back();
                    }
                } else {
                    result.push_back(c);
                }
            }
            return result;
        };
        s = process(s);
        t = process(t);
        return s == t;
    }
};