class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      // Create a variable count
        int cnt =0;
      // Start inserting the elements in the unordered map to count the frequency
        unordered_map<int,int>freqMap;
      // Loop through the frequncy map and increment the frequency if there are more such elements
        for(int i=0;i<nums.size();i++) {
            freqMap[nums[i]]++;
        }
      // Check whether the above condition satisfies if it does, then increment the count of cnt
        for(int i=0;i<nums.size();i++) {
            if(freqMap[nums[i]+diff] && freqMap[nums[i]+diff+diff]) {
                cnt++;
            }
        }
      // Return the variable
        return cnt;
        
     }
};
