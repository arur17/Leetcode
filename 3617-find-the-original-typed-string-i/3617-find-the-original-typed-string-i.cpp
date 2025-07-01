class Solution {
public:
    int possibleStringCount(string str) {
        int quit = 1;
        vector<char> vec(str.begin(), str.end());
        for(int i = 0; i< vec.size()-1; i++){
            if(vec[i] == vec[i+1]){
                quit++;
            }
        }
        return quit;
    }
};