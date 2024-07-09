//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int left = 0;
        int right = n - 1;
        int ans1 = 0;
        int ans2 = n-1;
        while(left <= right) {
            int mid = left+(right - left) / 2;
            if(arr[mid] == k) {
                return k;
            }
            else if(arr[mid] < k) {
                ans1 = mid;
                left = mid + 1;
            }
            else{
                ans2 = mid;
                right = mid - 1;
            }
        }
        if(abs(arr[ans1] - k) < abs(arr[ans2] - k)) {
            return arr[ans1];
        }
        else if(abs(arr[ans1] - k) > abs(arr[ans2] - k)) {
            return arr[ans2];
        }
        else{
            return max(arr[ans1],arr[ans2]);
        }
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends
