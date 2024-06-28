//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int ele = arr[0];
        unordered_map<int,int>freqMap;
        for(int i = 0; i < n; i++) {
            if(freqMap.find(arr[i]) != freqMap.end()) {
                freqMap[arr[i]]++;
            }
            else{
                freqMap[arr[i]] = 1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(freqMap[arr[i]] % 2 != 0) {
                ele = arr[i];
            }
        }
        return ele;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends
