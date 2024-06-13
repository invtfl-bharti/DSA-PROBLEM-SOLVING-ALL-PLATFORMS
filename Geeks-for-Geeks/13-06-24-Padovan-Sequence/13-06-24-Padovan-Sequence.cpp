//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int mod = 1e9 + 7 ;
    int padovanSequence(int n) {
        // code here.
        long long p[n] ;
        p[0] = 1 ;
        p[1] = 1 ;
        p[2] = 1 ;
        for(int i = 3;i <= n ;i++){
            p[i] = (p[i-2] + p[i-3])% mod ;
        }
        return p[n] ;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
