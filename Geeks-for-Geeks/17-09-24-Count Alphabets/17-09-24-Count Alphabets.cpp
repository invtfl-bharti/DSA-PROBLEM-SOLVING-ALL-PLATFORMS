//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}


// } Driver Code Ends


int Count(string S){
    //complete the function here
    int n = S.length();
    int cnt = 0;
    for(int i=0; i<n;i++){
        char ch = S[i];
        if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
            cnt++;
    }
    return cnt;
    
}
