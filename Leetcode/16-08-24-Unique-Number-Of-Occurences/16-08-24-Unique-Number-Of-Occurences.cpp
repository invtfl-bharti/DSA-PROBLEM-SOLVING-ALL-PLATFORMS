class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freqMap;
        set<int>s;
        for(int i = 0 ; i < arr.size(); i++) {
            if(freqMap.find(arr[i]) != freqMap.end()) {
                freqMap[arr[i]]++;
            }
            else{
                freqMap[arr[i]] = 1;
            }
        }
        for(auto it  : freqMap) {
            if(s.find(it.second) != s.end()) {
                return false;
            }

            else{
                s.insert(it.second);
            }
        }
        return true;
    }
};
