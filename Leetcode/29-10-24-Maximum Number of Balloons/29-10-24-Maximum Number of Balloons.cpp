class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>freqMap;
        for(const char it : text) {
            if(it == 'b' || it == 'a' || it == 'l' || it == 'o' || it == 'n') {
                freqMap[it]++;
            }
        }

        return  min({freqMap['b'], freqMap['a'], freqMap['l']/2, freqMap['o']/2, freqMap['n']});

    }
};
