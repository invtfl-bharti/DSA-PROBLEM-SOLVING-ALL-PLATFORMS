//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
        int a[4] = {1,1,1,0};
        int b[4] = {1,1,1,0};
        int mul[4];
        int mod = 1000000007;
        for(int i=0;i<n-1;i++) {
            mul[0] = ((a[0]*b[0])+(a[1]*b[2]))%mod;
            mul[1] = ((a[0]*b[1])+(a[1]*b[3]))%mod;
            mul[2] = ((a[2]*b[0])+(a[3]*b[2]))%mod;
            mul[3] = ((a[2]*b[1])+(a[3]*b[3]))%mod;
            for(int j=0;j<4;j++) {
                a[j] = mul[j];
            }
            
        }
        return a[2];
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
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
