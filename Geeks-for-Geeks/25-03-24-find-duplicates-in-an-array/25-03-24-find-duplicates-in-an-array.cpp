//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    vector<int> duplicates(long long arr[], int n) {
        vector<int>s;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            map[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(map[i]>1)
            {
                s.push_back(i);
            }
        }
        if(s.empty())
        {
            s.push_back(-1);
        }
        sort(s.begin(),s.end());
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
