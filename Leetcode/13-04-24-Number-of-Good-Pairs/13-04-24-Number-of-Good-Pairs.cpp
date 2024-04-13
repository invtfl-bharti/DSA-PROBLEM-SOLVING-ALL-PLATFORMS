class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      // Creating a HashMap
        unordered_map<int,int>freqMap;
      // Initializing a variable called count to count the number of good pair
        int count = 0;
      // Incrementing the frequency of the elements present in the array if it already exits
        for(int i=0;i<nums.size();i++) {
            if(freqMap.find(nums[i])!=freqMap.end()) {
                freqMap[nums[i]]++;
            }
              // If the element is not present then incrementing it to 1
            else{
                freqMap[nums[i]]=1;
            }
        }
      // Traversing through the array to find the good pair that is nums[i]==nums[j] and i<j
      for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]==nums[j]) {
                  // Incrementing count
                    count++;
                }

            }
        }
      // Return the variable
        return count;
    }
};
