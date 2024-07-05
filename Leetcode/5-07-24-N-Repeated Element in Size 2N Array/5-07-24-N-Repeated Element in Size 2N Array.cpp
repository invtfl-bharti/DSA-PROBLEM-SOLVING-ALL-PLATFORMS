class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freqMap;
        int ele = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
            if(freqMap[nums[i]] > 1) {
                ele = nums[i];
            }
            
        }
        return ele;
    }
};
