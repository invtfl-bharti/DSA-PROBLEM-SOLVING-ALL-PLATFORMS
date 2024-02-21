class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = 0; 

        for(int i=0;i<array.size();i++) {
             sum+=array[i];
        }
        int normal_sum = (n*(n+1))/2;
        return (normal_sum-sum);
    }
};
