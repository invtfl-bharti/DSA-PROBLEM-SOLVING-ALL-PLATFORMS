//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int getSegments(vector<int> arr, int n, int x) {

        // Your code here
        int segments = 0;
        int currentOr = 0;
        for(int i = 0; i < n; i++) {
            if((currentOr | arr[i]) > x) {
                segments++;
                currentOr = arr[i];
            }
            else{
                currentOr |= arr[i];
            }
        }
        
       
        if(currentOr > 0) {
            segments++;
        }
        return segments;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int &a : arr)
            cin >> a;

        Solution ob;

        int res = ob.getSegments(arr, n, s);

        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends
