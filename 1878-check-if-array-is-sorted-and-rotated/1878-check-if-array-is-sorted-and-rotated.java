class Solution {
    public boolean check(int[] nums) {
        int pivot = 0;
        boolean isinc = true;
        for(int i = 1; i<nums.length;i++){
            if(nums[i]<nums[i-1]){
                pivot = i;
                isinc = false;
                break;
            }
        }
        if(isinc){
            return true;
        }
        int rotation = nums.length-pivot;
        int[] rotatedarry = new int[nums.length];
        for(int i = 0; i<nums.length; i++){
            rotatedarry[(i+rotation)%nums.length]=nums[i];
        }
        for(int i = 1; i<nums.length; i++){
           if( rotatedarry[i]<rotatedarry[i-1]){
            return false;
           }
        }
        return true;
    }
    }
