class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>arr;
        unordered_map<int,int>freqMap;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0;j < nums[i].size(); j++) {
                freqMap[nums[i][j]]++;
            }
        }

        for(auto i : freqMap) {
            if(i.second == nums.size()) {
                arr.push_back(i.first);
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
