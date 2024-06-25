int romanToInt(char *s) {
    // Define a hashmap for Roman numeral values
    int roman_values[26]; // Assuming Roman numerals are all uppercase and within A-Z range
    roman_values['I' - 'A'] = 1;
    roman_values['V' - 'A'] = 5;
    roman_values['X' - 'A'] = 10;
    roman_values['L' - 'A'] = 50;
    roman_values['C' - 'A'] = 100;
    roman_values['D' - 'A'] = 500;
    roman_values['M' - 'A'] = 1000;
    
    int total = 0;
    int prev_value = 0;
    
    // Iterate through the string
    for (int i = 0; s[i] != '\0'; i++) {
        int current_value = roman_values[s[i] - 'A'];
        
        // Check for subtractive combinations (e.g., IV = 4, IX = 9)
        if (current_value > prev_value) {
            total += current_value - 2 * prev_value;
        } else {
            total += current_value;
        }
        
        prev_value = current_value;
    }
    
    return total;
}