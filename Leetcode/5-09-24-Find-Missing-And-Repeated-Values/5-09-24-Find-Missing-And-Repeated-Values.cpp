class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>freqMap;
        vector<int>arr;
        for(int i = 0; i < grid.size();i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                freqMap[grid[i][j]]++;
            }
        }

        for(auto it : freqMap) 
        {
            if(it.second > 1) {
                arr.push_back(it.first);
            }
        }

        int n = grid.size() * grid.size();
        
            for(int j = 1; j <= n; j++) {
                   if(freqMap.find(j) == freqMap.end()) {
                    arr.push_back(j);
                   }
            }

            return arr;
        

    }
};
