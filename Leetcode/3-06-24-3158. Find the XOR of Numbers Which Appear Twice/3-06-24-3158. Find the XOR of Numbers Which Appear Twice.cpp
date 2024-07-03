class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>freqMap;
        int result = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
        }
        for(auto num:freqMap) {
            if(num.second == 2) {
                result ^= num.first;
            }
        }
        return result;


    }
};
