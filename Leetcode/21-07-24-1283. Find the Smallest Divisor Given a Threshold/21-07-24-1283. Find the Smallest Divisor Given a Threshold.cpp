#include <vector>
#include <cmath>
#include <algorithm> 

class Solution {
public:
    int sumOfDivisors(std::vector<int>& nums, int div) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum = sum + std::ceil((double)(nums[i]) / (double)(div));
        }
        return sum;
    }

    int smallestDivisor(std::vector<int>& nums, int threshold) {
        int low = 1;  
        int high = *std::max_element(nums.begin(), nums.end());
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(sumOfDivisors(nums, mid) <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
