class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int i= 0;
        int n = nums.size();
        int j = 0;
        unordered_map<int,int>freqMap;
        int resultLength = 0;
        while(j<n) {
               freqMap[nums[j]]++;
               while(i<j && freqMap[nums[j]]>k) {
                freqMap[nums[i]]--;
                i++;
               }
               resultLength = max(resultLength,j-i+1);
               j++;
        }
        return resultLength;
    }
};
