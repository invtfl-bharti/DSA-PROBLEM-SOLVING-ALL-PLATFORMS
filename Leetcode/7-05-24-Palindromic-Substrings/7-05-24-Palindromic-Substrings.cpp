class Solution {
public:
int expand(string s, int j, int i) {
// Initialize a variable called count and declare it as 0
    int count = 0;
    while(j >= 0 && i < s.length() && s[j] == s[i]) {
        // Keep checking whether the characters are same by incrementing i
        // Decrementing j
        // if is it same then increment the count
        // There has to be an edge case that the two pointers should not go out of bound
        // i should be >= 0 and j should < string length
        count++;
        j--;
        i++;
    }
    // Return the variable count
    return count;
}
    int countSubstrings(string s) {
        // Count the total Number of the odd length string and even length strings
        int totalCount = 0;
        for(int center = 0;center < s.length(); center++) {
        //   ODD
        // To check the odd length of string where the string
        // could be a palindrome 
        // Odd case it will be checking itself and also outwards if found then incremeent 
        // the value of totalCount
        // so the i will be the current position and j will also be the current position
               int oddAns = expand(s, center, center);
        // EVEN
        // Check the even length of string where the string could be a plaindrome
        // Even case it will be checking outwards meaning the other elements other thsn itself
        // so the i will be the current position and j will be the next position
                int evenAns = expand(s, center, center+1);
                // Total Count
                totalCount = totalCount + evenAns + oddAns;
        }
        return totalCount;
        
    }

};
