class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int max = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='(') {
                counter++;
                if(counter>max) {
                    max = counter;
                }
            }
            else if(s[i]==')') {
                counter--;
            }
            
        }
        return max;
    }
};
