class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> st;
        string current = "";
        int num = 0;

        for (char c : s){
            if(isdigit(c)){
                num = num * 10 + ( c - '0');
            }
            else if ( c == '['){
                st.push({current, num});

                current = "";
                num = 0;
            }
            else if (isalpha(c)){
                current.push_back(c);
            }

            else if (c == ']'){
                auto top = st.top();
                st.pop();

                string pre = top.first;
                int repeat = top.second;

                string temp = "";

                while( repeat--) {
                    temp += current;
                }
                current = pre + temp;
            }
        }
        return current;
    }
};