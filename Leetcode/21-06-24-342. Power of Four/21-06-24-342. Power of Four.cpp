class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) {
            return false;
        }
        for(int i = 0; i < 16; i++) {
            int ans = pow(4,i);
            if(ans == n) {
                return true;
            }
            if(ans > INT_MAX/4) {
                break;
            }
        }
        return false;
     }
};
