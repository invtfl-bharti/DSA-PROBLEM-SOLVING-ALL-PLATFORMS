class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>freqMap;
        for(int i=0;i<nums.size();i++) {
              freqMap[nums[i]]++;
        }
        int missingPositive = 1;
        while (freqMap.find(missingPositive) != freqMap.end()) {
        missingPositive++; 
    }
        return missingPositive;
        
    }
};
