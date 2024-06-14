class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int moves = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] >= nums[i+1]) {
                int diff = nums[i] - nums[i+1] + 1;
                moves += diff;
                nums[i+1] += diff;
            }
        }
        return moves;
        
    }
};
