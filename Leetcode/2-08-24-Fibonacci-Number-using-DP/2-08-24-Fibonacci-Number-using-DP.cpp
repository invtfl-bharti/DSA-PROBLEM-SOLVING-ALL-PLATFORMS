class Solution {
public:

// Normal recursion
    // int solvingRec(int n) {
    //     if(n == 0 || n == 1) {
    //         return n;
    //     }

    //     int ans = solvingRec(n-1) + solvingRec(n-2);
    //     return ans;
    // }

    // Top-Down Approach
    int solveUsingMemo(int n, vector<int>& dp) {
         if(n == 0 || n == 1) {
            return n;
        }

        // If ans already exists then return ans
        if(dp[n] != -1) 
            return dp[n];
// Store and return using dp array
        dp[n] = solveUsingMemo(n-1, dp) + solveUsingMemo(n-2, dp);
        return dp[n];


        
        
    }
    int fib(int n) {
        // Creation of dp
        vector<int>dp(n+1,-1);
        int ans = solveUsingMemo(n,dp);
        return ans;
    }
};
