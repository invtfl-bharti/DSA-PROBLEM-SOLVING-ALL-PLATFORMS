class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>freqMap;
        for(int i = 0;i < s.length(); i++) {
            if(freqMap.find(s[i]) != freqMap.end()) {

            freqMap[s[i]]++;
            }
            else{
                freqMap[s[i]] = 1;
            }
            
        }
        int same = freqMap[s[0]];
        for(auto it : freqMap) {
            if(it.second != same){
            return false;

            }
        }
        return true;
    }
};
