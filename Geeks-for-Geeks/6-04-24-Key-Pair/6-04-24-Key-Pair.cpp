//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here        
	    unordered_map<int,int>freqMap;
	    sort(arr,arr+n);
	    int i=0;
	    int j=n-1;
	    for(i=0;i<n;i++) {
	        freqMap[arr[i]]++;
	        while(i<j) {
	            int sum = arr[i]+arr[j];
	            if(sum==x) {
	                return true;
	            }
	            else if(sum>x) {
	                j--;
	            }
	            else{
	                i++;
	            }
	        }
	    }
	    return false;
	    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends
