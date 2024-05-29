class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

        vector<int>target;
        for (int i = 0; i < nums.size(); i++) {
            // Insert nums[i] at index[i] in the target array
            target.insert(target.begin() + index[i], nums[i]);
        }

        return target;
    }
};
