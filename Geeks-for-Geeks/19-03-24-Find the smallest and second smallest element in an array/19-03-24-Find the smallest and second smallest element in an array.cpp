//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    
    if(n<2){
        return {-1,-1};
    }
    sort(a,a+n);
    int firstMin=a[0];
    int secondMin=-1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            secondMin=a[i];
            return {firstMin,secondMin};
        }
    }
    return {-1,-1};
}
