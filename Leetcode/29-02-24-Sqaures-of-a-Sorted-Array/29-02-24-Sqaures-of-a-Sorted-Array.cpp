class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        
        int sqaures;
        for(int i=0;i<nums.size();i++) {
              sqaures = nums[i]*nums[i];
              arr.push_back(sqaures);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
