//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
       int i=0,j=0;
        vector<int> ans;
        list<int> m;
        while(j<n){
            while(m.size()>0 && m.back()<arr[j]){
                m.pop_back();
            }
            m.push_back(arr[j]);
            
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                ans.push_back(m.front());
                if(arr[i]==m.front())
                m.pop_front();
                i++;
                j++;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
