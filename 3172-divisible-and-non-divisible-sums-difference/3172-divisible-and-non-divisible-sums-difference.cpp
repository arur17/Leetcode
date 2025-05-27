class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum_no =0;
        int sum_yes =0;
        for(int i = 1; i<= n; i++){
            if(i%m){
                sum_no+=i;
            }
            else{
                sum_yes+=i;
            }
        }
        return sum_no-sum_yes;
    }
};