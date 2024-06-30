class Solution {
public:
    bool isPerfectSquare(long long num) {
        if(num == 1 || num == 0){
            return true;
        }
        bool party = false;
        for(long long i = 0; i <= num/2; i++){
            if(i*i == num){
                party = true;
                break;
            }
        }
        return party;
    }
};