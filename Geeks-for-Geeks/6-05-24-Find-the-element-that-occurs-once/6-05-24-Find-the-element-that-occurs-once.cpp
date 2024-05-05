//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int countOne = A[0];
	    unordered_map<int,int>freqMap;
	    for(int i=0;i<N;i++) {
	        freqMap[A[i]]++;
	    }
	    for(int i=0;i<N;i++) {
	        if(freqMap[A[i]]==1) {
	            countOne = A[i];
	        }
	    }
	    return countOne;
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends
