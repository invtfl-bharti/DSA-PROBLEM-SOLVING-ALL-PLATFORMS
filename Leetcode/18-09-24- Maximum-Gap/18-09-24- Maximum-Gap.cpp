class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff = 0;
        if(nums.size() < 2) 
            return 0;
        
        for(int i = 1; i < nums.size(); i++) {
            diff = max(diff,(nums[i] - nums[i-1]));
        }
        return diff;
    }
};
