class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>averages;
       sort(nums.begin(),nums.end());
        while(!nums.empty()) {
            int minElement = nums.front();
            int maxElement = nums.back();
            nums.erase(nums.begin());
            nums.pop_back();
            double average = (minElement + maxElement)/2.0;
            averages.push_back(average);
            
        }
        return *min_element(averages.begin(),averages.end());
        
    }
};
