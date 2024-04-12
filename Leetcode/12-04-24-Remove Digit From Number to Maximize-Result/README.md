class Solution {
public:
    string removeDigit(string number, char digit) {
        // Iterate through each character of the string
        for(int i = 0; i < number.length(); i++) {
            // Check if the current character matches the digit and if the next character is greater than the digit
            if(number[i] == digit && digit < number[i + 1]) {
                // If both conditions are met, erase the current character from the string and return the modified string
                number.erase(i, 1);
                return number;
            } 
        }
        // If the specified digit is not found in the preceding digits, find the last occurrence of the digit in the string
        int last = number.find_last_of(digit);
        // Erase the last occurrence of the digit from the string
        number.erase(last, 1);
        // Return the modified string
        return number;
    }
};
