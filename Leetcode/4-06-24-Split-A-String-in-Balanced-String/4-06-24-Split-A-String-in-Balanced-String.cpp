class Solution {
public:
    int balancedStringSplit(string s) {
        int totalCount = 0;
        int countR = 0;
        int countL = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'R') {
                countR++;
            }
            else if(s[i] == 'L') {
                countL++;
            }
            if(countR == countL) {
                totalCount++;
                countR = 0;
                countL = 0;
            }
        }
        return totalCount;

    }
};
