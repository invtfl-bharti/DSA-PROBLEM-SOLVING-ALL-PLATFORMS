//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>a;
        int left = 0;
        int right = n-1;
        int minIndex = -1;
        int maxIndex = -1;
        while(left<=right) {
            int mid = left+(right-left)/2;
            if(arr[mid]==x) {
                minIndex = mid;
                right = mid-1;
            }
            else if(arr[mid]>x) {
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        left = 0;
        right =n-1;
        while(left<=right) {
            int mid = left+(right-left)/2;
            if(arr[mid]==x) {
                maxIndex = mid;
                left = mid+1;
                
            }
            else if(arr[mid]>x) {
                right = mid-1;
            }
            else{
                left=mid+1;
            }
        }
        a.push_back(minIndex);
        a.push_back(maxIndex);
        return a;
        
        // vector<int>a;
        // int minIndex = -1;
        // int maxIndex = -1;

        // // Find minIndex
        // for (int i = 0; i < n; i++) {
        //     if (arr[i] == x) {
        //         minIndex = i;
        //         break;
        //     }
        // }

        // // Find maxIndex
        // for (int i = n - 1; i >= 0; i--) {
        //     if (arr[i] == x) {
        //         maxIndex = i;
        //         break;
        //     }
        // }
        // a.push_back(minIndex);
        // a.push_back(maxIndex);
        // return a;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
