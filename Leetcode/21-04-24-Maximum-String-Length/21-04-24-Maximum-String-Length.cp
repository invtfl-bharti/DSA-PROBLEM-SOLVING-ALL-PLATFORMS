class Solution {
public:
    int minimizedStringLength(string s) {
        // Create an unordered map
        unordered_map<int,int>freqMap;
        // Traverse the string and start incresing the frequency if it duplicates
        for(int i=0;i<s.length();i++) {
            freqMap[s[i]]++;
        }
        // return the size of the frequency map
        return freqMap.size();

    }
};
