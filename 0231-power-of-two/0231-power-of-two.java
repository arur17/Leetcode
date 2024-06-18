class Solution {
    public boolean isPowerOfTwo(int n) {
        int a = 1;
        for(int i = 0; i<=30; i++){
            if(a == n){
                return true;
            }
            a=a*2;
        }
        return false;
    }
}