bool isOdd(int nums){
    if(nums % 2 == 0 ){
        return 1;
    }
    else{
        return 0;
    }

}

bool isArraySpecial(int* nums, int n) {
    for(int i =1; i< n; i++){
        if(isOdd(nums[i])==isOdd(nums[i-1])){
            return 0;
        }
    }
    return 1;
}