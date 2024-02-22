class Solution {
public:
    bool isPalindrome(int x) {
        string stringNumber = to_string(x);
        string reversedString = stringNumber;
        reverse(stringNumber.begin(), stringNumber.end());
        if(stringNumber == reversedString) {
            return true;
        }
        else{
            return false;
        }
    }
};
