//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        // Create an unordered_map and start inserting the elements in the Map
        unordered_map<int,int>freqMap;
        // Loop through and find whether the upcoming element already exists in the frequency Map
        for(int i=0;i<n;i++) {
            if(freqMap.find(arr[i])!=freqMap.end()) {
                // If it already exists then increment the frequency
                freqMap[arr[i]]++;
            }
            // If it doesn't then mark it as 1
            else{
                freqMap[arr[i]] = 1;
            }
            
        }
        // Loop through the frequency Map if it has only frequency then return the element if it doesnt then return 0
        for(int i=0;i<n;i++){
            if(freqMap[arr[i]]==1) {
                return arr[i];
            }
        }        return 0;
        
        
    } 
  
};


//{ Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

// } Driver Code Ends
