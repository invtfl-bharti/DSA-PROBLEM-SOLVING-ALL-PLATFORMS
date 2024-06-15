class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxEle = candies[0];
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] > maxEle) {
                maxEle = candies[i];
            }
        }
        vector<bool>arr;
        for(int i = 0; i < candies.size(); i++) {
            int totalCandies = candies[i] + extraCandies;
            if(totalCandies >= maxEle) {
                arr.push_back(true);
            }
            else{
                arr.push_back(false);
            }
        }
        return arr;
        
    }
};
