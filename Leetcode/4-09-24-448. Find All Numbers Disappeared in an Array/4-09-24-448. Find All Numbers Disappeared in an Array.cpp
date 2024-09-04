class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>freqMap;
        vector<int>arr;
        for(int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }
        for(int i = 1; i <= nums.size(); i++) {
            if(freqMap.find(i) == freqMap.end()) {
                arr.push_back(i);
            }

        }
        return arr;
    }
};
