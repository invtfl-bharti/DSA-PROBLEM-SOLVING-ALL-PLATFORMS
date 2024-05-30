class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ct=0;
        int i,j;
        for(i=0;i<nums1.size();i++)
        {
            for(j=0;j<nums2.size();j++)
            {
                if(nums1[i]%(nums2[j]*k)==0)
                    ct++;
            }
        }
        return ct;
    }
};
