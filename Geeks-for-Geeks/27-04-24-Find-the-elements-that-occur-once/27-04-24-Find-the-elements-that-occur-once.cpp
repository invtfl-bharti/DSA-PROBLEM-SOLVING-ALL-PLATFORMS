//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        // Declare a avriable and initialize it as the first element of the array
        int ele = arr[0];
        // Unordered_map
        unordered_map<int,int>freqMap;
        for(int i=0;i<n;i++) {
            // If the current element already existe in the map then increment the frequency of it
            if(freqMap.find(arr[i])!=freqMap.end()) {
                freqMap[arr[i]]++;
            }
            // If the element was not in the map initialize it to 1
            else{
                freqMap[arr[i]] = 1;
            }
        }
        // If the frequency of the element is 1 then initialize the value of the element as the
        // element which has freq 1
        for(int i=0;i<n;i++) {
            if(freqMap[arr[i]]==1) {
                ele = arr[i];
            }
        }
        // return element
        return ele;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends
