class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++) {
        string res = "";
            res += details[i][11];
            res += details[i][12];
            if(res > "60") {
                count++;
            }
        }
        return count;
    }
};
