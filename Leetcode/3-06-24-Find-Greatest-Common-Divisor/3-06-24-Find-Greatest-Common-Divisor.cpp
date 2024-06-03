class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first = nums[0];
        int last = nums[nums.size() - 1];
        int ans = ((first * last) / lcm(first,last));
        return ans;
    }
};
