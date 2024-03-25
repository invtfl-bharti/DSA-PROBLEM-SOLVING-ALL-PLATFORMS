 class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> freqMap;
        
        for (int i=0;i<nums.size();i++) {
            freqMap[nums[i]]++;
            if (freqMap[nums[i]] == 2) { 
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
        
    }
};
