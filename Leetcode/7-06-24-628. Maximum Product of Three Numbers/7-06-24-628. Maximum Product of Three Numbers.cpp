class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int nums1 = nums[n-1] * nums[n-2] * nums[n-3];
        int nums2 = nums[0] * nums[1] * nums[n-1];
        return max(nums1,nums2);
    }
};
