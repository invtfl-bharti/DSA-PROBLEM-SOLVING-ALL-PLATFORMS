class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int,int>freqMap;
        for(int i = 0;i < nums.size(); i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
        }
        for(int i = 0;i < nums.size(); i++) {
            if(freqMap[nums[i]] > (nums.size()/3)) {
                arr.push_back(nums[i]);
                // Remove this element from freqMap to avoid duplicate addition
            freqMap.erase(nums[i]);
            }
        }
        return arr;
    }
};
