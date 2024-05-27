class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size();
        while(left <= right) {
            int x = 0;
            int mid = left + (right-left)/2;
            for(int i = 0; i < nums.size(); i++) {
               if(nums[i] >= mid) {
                x++;
               }
            }
            if(x == mid) {
                return x;
            }
        if(x > mid) {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
        }
        return -1;
    }
};
