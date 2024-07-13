class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>freqMap;
        for(int i = 0; i < nums.size(); i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
            
        }
        for(int i = 0; i < nums.size(); i++) {
              if(freqMap[nums[i]] % 2 != 0) {
                return false;
            }
        }
        return true;

    }
};
