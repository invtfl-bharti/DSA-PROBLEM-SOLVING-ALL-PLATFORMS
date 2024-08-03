class Solution {
public:

    // int solveUsingRec(vector<int>& nums,int index) {

    //     // base case
    //     if(index >= nums.size()) {
    //         return 0;
    //     }
        
    //     // recursive relation
    //     int include = nums[index] + solveUsingRec(nums, index + 2);
    //     int exclude = 0 + solveUsingRec(nums, index + 1);
    //     int ans = max(include,exclude);
    //     return ans;
    // }
        // memo

        int solveUsingMemo(vector<int>& nums,int index,vector<int>& dp) {
            // base case
            if(index >= nums.size()) {
                return 0;
            }
            // ans already exists
            if(dp[index] != -1) {
                return dp[index];
            }

            // recursive relation
            int include = nums[index] + solveUsingMemo(nums,index + 2,dp);
            int exclude = 0 + solveUsingMemo(nums,index + 1,dp);
            dp[index] = max(include,exclude);
            return dp[index];
        }

    
    int rob(vector<int>& nums) {
        int index = 0;
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        int ans = solveUsingMemo(nums, index, dp);
        return ans;
    }
};
