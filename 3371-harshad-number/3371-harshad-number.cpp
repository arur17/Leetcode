class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int actNumber = x;
        int sumOfDigits = 0;
        while(x>0){
            int z = x%10;
            sumOfDigits = sumOfDigits + z;
            x = x/10;
        }
        if(actNumber % sumOfDigits == 0){
            return sumOfDigits;
        }
        else{
            return -1;
        }
        
    }
};