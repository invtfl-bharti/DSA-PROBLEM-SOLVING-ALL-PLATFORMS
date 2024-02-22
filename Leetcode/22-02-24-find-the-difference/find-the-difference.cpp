class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        string total = s + t;
        if(s.length()!=t.length()-1) {
            return result;
        }
        for(int i=0;i< s.length();i++) {
           result^=s[i];
           result^=t[i];
        }
        result ^= t[t.length() - 1];
        return result;
        
        
    }
};
