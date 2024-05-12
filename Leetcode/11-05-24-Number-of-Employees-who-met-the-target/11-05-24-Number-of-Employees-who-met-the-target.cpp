class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(int i = 0; i < hours.size(); i++) {
            if(hours[i] >= target) {
                count += 1;
            }
        }
        return count;
        // vector<int>arr;
        // for(int i = 0;i < hours.size(); i++) {
        //     if(hours[i] >= target) {
        //         arr.push_back(hours[i]);
        //     }
        // }
        // int n = arr.size();
        // return n;

    }
};
