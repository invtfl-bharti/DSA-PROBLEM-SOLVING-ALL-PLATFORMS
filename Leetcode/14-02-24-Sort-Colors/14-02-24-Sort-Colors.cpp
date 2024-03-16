class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) {
                zeroCount++;
            }
            else if(nums[i]==1) {
                oneCount++;
            }
            else if(nums[i]==2) {
                twoCount++;
            }
            
        }
        for(int i=0;i<zeroCount;i++) {
            nums[i]=0;

        }
        for(int i=zeroCount;i<zeroCount+oneCount;i++) {
            nums[i]=1;
            
        }
        for(int i=zeroCount+oneCount;i<nums.size();i++) {
            nums[i]=2;
            
        }
        
        
    }
};
