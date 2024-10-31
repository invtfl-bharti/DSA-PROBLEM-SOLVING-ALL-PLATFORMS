class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans = arr;
        unordered_map<int,int>freqMap;
        

        int rank = 1;
        sort(ans.begin(), ans.end());
        for(int i = 0; i < n; i++) {
            if(freqMap.find(ans[i]) == freqMap.end()) {
                freqMap[ans[i]] = rank;
                rank++;
            }
        }

        for(int i = 0; i < n; i++) {
            arr[i] = freqMap[arr[i]];
        }

        return arr;
    }
};
