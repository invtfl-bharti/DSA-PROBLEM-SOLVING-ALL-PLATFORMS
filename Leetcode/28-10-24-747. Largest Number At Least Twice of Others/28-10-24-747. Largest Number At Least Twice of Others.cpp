class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxiIndex = 0;
        if(nums.size() == 0) {
            return 0;
        }


        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > nums[maxiIndex]) {
                maxiIndex = i;
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            if(i != maxiIndex && nums[maxiIndex] < 2 * nums[i]) {
                return -1;
            }
        }
        return maxiIndex;
    }
};
