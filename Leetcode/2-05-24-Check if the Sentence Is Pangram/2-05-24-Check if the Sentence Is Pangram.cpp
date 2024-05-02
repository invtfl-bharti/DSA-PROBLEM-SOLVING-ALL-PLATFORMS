class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<int,int>freqMap;
        for(int i=0;i<sentence.size();i++) {
            if(freqMap.find(sentence[i]) != freqMap.end()) {
                freqMap[sentence[i]]++;
            }
            else{
                freqMap[sentence[i]] = 1;
            }
        }
        for(int i='a';i<='z';i++){
            if(freqMap.find(i)==freqMap.end() || freqMap[i] == 0) {
                return false;
            }
        }
        return true;
    }
};
