//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
         map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        vector<int>ar;
        
        for(auto i:m){
            ar.push_back(i.second);
        }
        sort(ar.begin(),ar.end());
        
        for(int i=0;i<ar.size()-1;i++){
            if(ar[i]==ar[i+1]){
                return false;
            }
        }return true;


        
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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends
