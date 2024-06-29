class Solution {
public:
    bool isself(int a){
        int b = a;
        if(a < 10){
            return true;
        }
        while(a>0){        
            int c = a % 10;
            if(c == 0){
                return false;
            }
            if(b % c == 0){
                a = a/10;
            }
            else{
                return false;
            }
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        for(int i = left; i<= right; i++){
            if(isself(i)){
                answer.push_back(i);
            }
        }
        return answer;
    }
};