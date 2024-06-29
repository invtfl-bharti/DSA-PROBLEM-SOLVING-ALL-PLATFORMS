class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freqMap;
        int element = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if(freqMap[nums[i]] == 1) {
                element = nums[i];
            }
        }
        return element;
    }
};
