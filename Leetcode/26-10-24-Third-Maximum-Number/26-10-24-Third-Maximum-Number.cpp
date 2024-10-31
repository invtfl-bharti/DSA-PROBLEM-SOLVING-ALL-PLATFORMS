class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        for(int i = nums.size() - 1; i >= 1; i--) {
            if(nums[i] != nums[i - 1]) {
                count++;
                if(count == 3) {
                    return nums[i - 1];
                }
            }
            
        }
        return nums[nums.size() - 1];
    }
};
