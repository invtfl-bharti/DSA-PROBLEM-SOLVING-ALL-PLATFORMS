class Solution {
public:
    double average(vector<int>& salary) {
        double total  = 0;
        sort(salary.begin(),salary.end());
        for(int i = 1; i < salary.size() - 1; i++) {
            total = total + salary[i];

        }
        total = total / (salary.size() - 2);
        return total;
        
    }
};
