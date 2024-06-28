class Solution {
public:
    int reverse(int x) {
        int reverseNum = 0;
        while(x != 0) {
            if((reverseNum > INT_MAX/10) || (reverseNum < INT_MIN/10))
            {
                return 0;
            }
            int lastDigit = x % 10;
            x = x / 10;
            reverseNum = (reverseNum * 10) + lastDigit;
        } 
        return reverseNum;
         
    }
};
