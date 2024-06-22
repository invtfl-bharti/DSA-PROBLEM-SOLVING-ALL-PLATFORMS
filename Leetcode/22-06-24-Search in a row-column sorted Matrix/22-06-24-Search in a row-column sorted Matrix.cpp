class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
         for(int i = 0; i < nums.size(); i++) {
             if(nums[i] % 3 != 0) {
                 int remainder = nums[i] % 3;
                 if(remainder == 1) {
                     count += 1;
                 }
                 if(remainder == 2) {
                     count += 1;
                 }
             }
             else{
                 continue;
             }
         }
        return count;
    }
};
