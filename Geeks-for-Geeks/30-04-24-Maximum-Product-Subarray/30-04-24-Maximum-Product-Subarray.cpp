//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	   // Initialize the prefix to 1
	    long long prefix = 1;
	   // Initialize the suffix to 1
	    long long suffix = 1;
	   // Initialize a variable called ans
	    long long ans = INT_MIN;
	   // If in between the element is 0 then replace it or consider it as 1 so that the array continues to 
	   //evaluate
	    for(int i=0;i<arr.size();i++) {
	        if(prefix==0) {
	            prefix = 1;
	        }
	        if(suffix==0) {
	            suffix=1;
	        }
	       // if the product is calculated from prefix side then multiply it with the element starting from 
	       //0th index
	        prefix = prefix*arr[i];
	        // if the product is calculated from suffix side then multiply it with the element starting from 
	       //0th index 
	       
	        suffix = suffix*arr[n-i-1];
	        ans = max(ans,max(prefix,suffix));
	        
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
