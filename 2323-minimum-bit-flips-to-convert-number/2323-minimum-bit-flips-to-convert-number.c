// Function to reverse the characters in a string
void reverse(char* str, int len, int i) {
    if (i < len / 2) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        reverse(str, len, i + 1);
    }
}

// Function to convert an integer to a binary string
char* convert_to_binary(int a) {
    char *ch = (char*)malloc(33); // Allocate memory for 32 bits + 1 null terminator
    if (!ch) {
        return NULL; // Handle malloc failure
    }
    int i = 0;
    while (a > 0) {
        ch[i] = (a % 2) + '0'; // Store '0' or '1' as a character
        a = a / 2;
        i++;
    }
    ch[i] = '\0'; // Null terminate the string
    reverse(ch, i, 0); // Reverse to get the correct binary representation
    return ch;
}

// Function to calculate minimum bit flips required to convert start to goal
int minBitFlips(int start, int goal) {
    char* ch1 = convert_to_binary(start);
    char* ch2 = convert_to_binary(goal);
    
    // Ensure both strings are of equal length
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    int maxLen = len1 > len2 ? len1 : len2;
    
    // Padding the shorter string with '0's
    char *padded_ch1 = (char*)malloc(maxLen + 1);
    char *padded_ch2 = (char*)malloc(maxLen + 1);
    
    if (!padded_ch1 || !padded_ch2) {
        return -1; // Handle malloc failure
    }
    
    int i, j;
    for (i = 0; i < maxLen - len1; i++) {
        padded_ch1[i] = '0';
    }
    for (j = 0; j < len1; j++) {
        padded_ch1[i + j] = ch1[j];
    }
    padded_ch1[maxLen] = '\0';
    
    for (i = 0; i < maxLen - len2; i++) {
        padded_ch2[i] = '0';
    }
    for (j = 0; j < len2; j++) {
        padded_ch2[i + j] = ch2[j];
    }
    padded_ch2[maxLen] = '\0';
    
    // Count the number of differing bits
    int count = 0;
    for (i = 0; i < maxLen; i++) {
        if (padded_ch1[i] != padded_ch2[i]) {
            count++;
        }
    }
    
    // Free allocated memory
    free(ch1);
    free(ch2);
    free(padded_ch1);
    free(padded_ch2);
    
    return count;
}