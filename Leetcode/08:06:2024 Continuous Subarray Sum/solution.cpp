#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map <int, int> freqMap ;

        freqMap[0] = -1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++){

            sum+=nums[i];
            int remainder = sum % k;

            if (freqMap.find(remainder)!= freqMap.end()){
                if (i - freqMap[remainder] >= 2){
                    return true;
                }
            }
            else {
                freqMap[remainder] = i;
            }

        }
        return false;
        
    }
};

