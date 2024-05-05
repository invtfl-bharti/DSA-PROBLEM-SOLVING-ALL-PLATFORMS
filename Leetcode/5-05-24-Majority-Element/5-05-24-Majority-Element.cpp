class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxElement = nums[0];
        unordered_map<int,int>freqMap;
        for(int i=0;i<nums.size();i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
        }
        for(int i=0;i<nums.size();i++) {
            if(freqMap[nums[i]] > (nums.size()/2)){
                maxElement = nums[i];
            }
        }
        return maxElement;
        

    }
};
