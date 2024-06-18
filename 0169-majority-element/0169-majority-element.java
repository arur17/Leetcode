class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        int answer = 0;
        for(int i = 0; i < n; i++){
            int count = 1;
            for(int j = i+1; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > n/2){
                answer = nums[i];
            }
        }
        // int supercount = 0;
        // int answer = nums[0];
        // for(int i =0; i<n ; i++){
        //     int count = 0;
        //     for(int j = 0; j<n; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count >= supercount){
        //             supercount = count;
        //             answer = nums[i];
        //         }
        // }
        return answer;
    }
}