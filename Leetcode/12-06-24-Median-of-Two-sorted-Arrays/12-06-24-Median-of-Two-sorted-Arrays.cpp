class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>arr;
        arr.insert(arr.end(), nums1.begin(), nums1.end());
        arr.insert(arr.end(), nums2.begin(), nums2.end());
        sort(arr.begin(), arr.end());
        double ans = 0.0;
        int n = arr.size();
        if(n % 2 != 0) {
            ans = arr[n/2];
        }
        if(n % 2 == 0) {
            double med1 = n / 2;
            double med2 = (n/2) - 1;
            ans = (arr[med1] + arr[med2]) / 2.0;
            
        }
        return ans;
    }
};
