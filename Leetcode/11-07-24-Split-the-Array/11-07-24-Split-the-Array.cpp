class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>freqMap;
        for(int i = 0; i < nums.size(); i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
        }
        for(auto &it: freqMap) {
             if(it.second>2)return false;
        }
        return true;
    }
};
