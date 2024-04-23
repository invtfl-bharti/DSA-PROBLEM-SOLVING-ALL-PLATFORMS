class Solution {
public:
    int scoreOfString(string s) {
        // Declare a variable called sum
        int sum = 0;
        // Loop through the string till the second last element and then find 
        // the difference of the ascii values of the characters
        for(int i=0;i<s.length()-1;i++) {
            int diff = abs(static_cast<int>(s[i])-static_cast<int>(s[i+1]));
            // add diff value to the sum if it is +ve
            sum+=diff;
        }
        // return the variable,sum
        return sum;
    }
};
