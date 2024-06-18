int hammingWeight(int n) {
    int count = 0;
    //consecutively reset least significant 1st bit
    while(n){
        count++;
        // reset least significant 1st bit
        n &= n -1;
    }
    return count;

    
}
