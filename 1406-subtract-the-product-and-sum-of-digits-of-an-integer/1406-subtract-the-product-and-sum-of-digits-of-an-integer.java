class Solution {
    public int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        while(n>0){
            int y = n%10;
            sum += y;
            prod *= y;
            n = n/10;
        }
        return prod-sum;
        
    }
}