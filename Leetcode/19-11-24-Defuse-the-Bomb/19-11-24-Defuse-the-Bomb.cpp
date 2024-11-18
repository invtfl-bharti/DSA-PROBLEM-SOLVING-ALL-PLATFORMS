class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans(n, 0);
// Case 1: 
        if(k > 0) {
            for(int i = 0; i < code.size(); i++) {
                int totalSum = 0;
                for(int j = 1; j <= k; j++) {
                    totalSum += code[(i + j) % n];
                }
                ans[i] = totalSum;
            }
        }

// Case 2:
         if(k < 0) {
            for(int i = 0; i < code.size(); i++) {
                int totalSum = 0;
                for(int j = 1; j <= abs(k); j++) {
                    totalSum += code[(i - j + n) % n];
                }

                ans[i] = totalSum;
            }
         }

         return ans;

    }
};
