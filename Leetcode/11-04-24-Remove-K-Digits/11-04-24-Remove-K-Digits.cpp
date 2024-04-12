class Solution {
public:
    string removeKdigits(string num, int k) {
        string str = ""; 
            // While there are characters in 'str', 'k' is positive, and the last character in 'str' is greater than the current digit
            while(str.length() > 0 && str.back() > num[i] && k > 0) {
                // Remove the last character from 'str' and decrement 'k'
                str.pop_back();
                k--;
            }
            // If 'str' is not empty or the current digit is not '0', append the current digit to 'str'
            if(str.length() > 0 || num[i] != '0') {
                str.push_back(num[i]);
            }
        }
        // Remove any remaining 'k' digits from 'str'
        while(k > 0 && str.length() > 0) {
            str.pop_back();
            k--;
        }
        // If 'str' is empty, return "0", otherwise, return 'str'
        if(str.empty()) {
            return "0";
        }
        return str;
    }
};
