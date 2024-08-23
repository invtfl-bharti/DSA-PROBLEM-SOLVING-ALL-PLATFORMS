class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int value1 = 0;
        int value2 = 0;
        for(auto val : nums) {
            if(val < 10) value1 += val;
            else value2 += val;
        }
        return value1 != value2;

        
    }
};
