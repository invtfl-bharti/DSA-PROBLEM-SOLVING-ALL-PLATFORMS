//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
    vector<int> bits(64, 0); // Assuming long long has 64 bits
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 64; j++) { // Loop through each bit position
            if (arr[i] & (1LL << j)) { // Check if the j-th bit is set in arr[i]
                ans += bits[j] * (1LL << j); // Add the contribution of arr[i] to the sum
                bits[j]++; // Increment the count of elements having the j-th bit set
            }
        }
    }
    return ans;
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
