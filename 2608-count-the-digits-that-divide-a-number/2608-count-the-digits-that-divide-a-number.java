class Solution {
    public int countDigits(int num) {
        int count = 0;
        int gogo = num;
        while(num > 0){
            int a = num % 10;
            if(gogo % a == 0){
                count++;
            }
            num = num/10;
        }
        return count;
        
    }
}