class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high = 0;
        int altitude = 0;
        for(int i = 0 ; i < gain.size(); i++) {
            altitude += gain[i];
            high = max(high,altitude);
        }
        return high;
    }
};
