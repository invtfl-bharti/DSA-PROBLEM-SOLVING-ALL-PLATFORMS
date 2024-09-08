//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firsthour(int n, vector<vector<int>> arr) {
        if(arr.size() == 0) {
            return 0;
        }
        int maxStart = arr[0][0];
        int minEnd = arr[0][1];
        for(int i = 1; i < arr.size(); i++) {
            maxStart = max(maxStart,arr[i][0]);
            minEnd = min(minEnd,arr[i][1]);
            
        }
        if(maxStart <= minEnd) {
                return 1;
        }
        else{
            return 0;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> arr[i][0] >> arr[i][1];
        }
        Solution obj;
        int ans = obj.firsthour(n, arr);
        if (ans) {
            cout << "1\n";
        } else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
