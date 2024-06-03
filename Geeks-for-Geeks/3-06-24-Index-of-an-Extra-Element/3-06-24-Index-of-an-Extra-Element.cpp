//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int index = 0;
        unordered_map<int,int>freqMap;
        for(int i = 0; i < n; i++) {
            if(freqMap.find(a[i]) != freqMap.end()) {
                freqMap[a[i]]++;
            }
            else{
                freqMap[a[i]] = 1;
            }
        }
        for(int i = 0; i < n; i++) {
            freqMap[b[i]]++;
            if(freqMap[a[i]] == 1) {
                index = i;
            }
        }
        return index;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends
