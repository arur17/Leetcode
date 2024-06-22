int maximum69Number (int num) {
    int maxx = num;
    int a = 0;
    int rev = 0;
    int multiplier = 1;
    int max_num = num;
    
    // Finding the first '6' and changing it to '9'
    while (num > 0) {
        a = num % 10;
        num /= 10;
        if (a == 6) {
            max_num = maxx + 3 * multiplier;
        }
        multiplier *= 10;
    }
    
    return max_num;
}
