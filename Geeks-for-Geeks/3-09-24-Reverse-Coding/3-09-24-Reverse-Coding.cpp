//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int sumOfNaturals(long long n) {
        // code here
        
        return ((n*(n + 1))/2)%1000000007;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
