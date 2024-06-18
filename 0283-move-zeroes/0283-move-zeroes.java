import java.util.*;

class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        ArrayList<Integer> temp = new ArrayList<>();
        for(int i = 0; i<n ; i++){
            if(nums[i] != 0){
                temp.add(nums[i]);
            }
        }
        int tempsize = temp.size();
        for(int i = 0; i<tempsize ; i++){
            nums[i] = temp.get(i);
        }
        for(int i = tempsize; i<n; i++){
            nums[i] = 0;
        }
    }
}