class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
       for(int num:nums) {
           total |= num;


       }
       return total << (nums.size()-1);
    }
};
