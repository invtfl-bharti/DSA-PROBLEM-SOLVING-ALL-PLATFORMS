class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;
        while(i < m && j < n) {
            if(nums1[i] == nums2[j]) {
                arr.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                  i++;
            }
            else{
                j++;
            }
            
        }
        return arr;

    }
};
