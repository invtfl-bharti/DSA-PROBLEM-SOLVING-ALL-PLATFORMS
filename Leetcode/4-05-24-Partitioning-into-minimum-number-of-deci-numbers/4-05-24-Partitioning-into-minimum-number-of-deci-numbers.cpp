class Solution {
public:
    int minPartitions(string n) {
        char maxdigit = n[0];
        for(int i=0;i<n.length();i++) {
            if(n[i]>maxdigit) {
                maxdigit = n[i];
            }
        }
        int num = maxdigit - '0';
        return num;
    }
};
