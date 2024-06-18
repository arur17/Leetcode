class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int maxx = Integer.MIN_VALUE;
        // for(int i = 0; i<n; i++){
        //     int sum = 0;
        //     for(int j = i; j<n;j++){
        //         sum += nums[j];
        //         maxx = Math.max(sum,maxx);
        //     }
        // }
        // return maxx;  
        int sum = 0;
        for(int i = 0; i<n; i++){
            
            sum += nums[i];
            if(sum > maxx){
                maxx = sum;
            }

            if(sum < 0){
                sum = 0;
            }
            
        }
        return maxx;
    }
}