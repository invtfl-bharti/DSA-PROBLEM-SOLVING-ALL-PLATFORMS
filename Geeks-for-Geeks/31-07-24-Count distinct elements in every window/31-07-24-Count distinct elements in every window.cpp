//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        int left = 0;
    int count = 0;
    unordered_map<int, int> freqMap;
    vector<int> v;
    
    
    for (int i = 0; i < n; i++) {
        freqMap[A[i]]++;
        count++;

        if (count == k) {
            v.push_back(freqMap.size());
        }

        if (count > k) {
            freqMap[A[left]]--;
            if (freqMap[A[left]] == 0) {
                freqMap.erase(A[left]);
            }
            left++;
            count--;

            
            if (count == k) {
                v.push_back(freqMap.size());
            }
        }
    }

    return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
