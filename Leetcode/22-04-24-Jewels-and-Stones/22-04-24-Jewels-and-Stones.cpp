class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Calculate the size of the jewels and stones
        int n = stones.length();
        int m = jewels.length();
        // Declare a count variable
        int count = 0;
        // Traverse through the string stones
        for(int i=0;i<n;i++) {
            // Traverse through the string jewels
            for(int j=0;j<m;j++) {
                // If both are equal then increment the count
                if(stones[i]==jewels[j]) {
                    count++;
                }
            }
            
        }
        // Return count
        return count;
    }
};
