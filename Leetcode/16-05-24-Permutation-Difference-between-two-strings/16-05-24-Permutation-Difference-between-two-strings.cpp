class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>freqMap;
        for(int i = 0; i < s.length(); i++) {
            
                freqMap[s[i]] = i;
            
            
        }
        int result = 0;
        for(int i = 0;i < t.length(); i++) {
            
                result += abs(i - freqMap[t[i]]);
            
        }
        return result;
    }    
};
