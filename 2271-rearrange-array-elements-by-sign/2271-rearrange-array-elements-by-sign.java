class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int posI = 0;
        int negI = 1;
        int[] list= new int[n];
        for(int i =0; i<n; i++){
            if(nums[i] > 0){
                list[posI] = nums[i];
                posI += 2;
            }
            else{
                list[negI] = nums[i];
                negI += 2;
            }
        }
        return list;
    }
}