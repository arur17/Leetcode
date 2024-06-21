int minBitFlips(int start, int goal) {
    int number_of_unmatched_bits = start ^ goal;
    int count = 0;
    while(number_of_unmatched_bits != 0){
        number_of_unmatched_bits = number_of_unmatched_bits & (number_of_unmatched_bits - 1);
        count++;
    }
    return count;
       
}