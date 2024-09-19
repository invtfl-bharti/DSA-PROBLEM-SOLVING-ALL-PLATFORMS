//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        int n = str.length();
        string ans;
        string result;
        for(int i = 0; i < n; i++) {
            if(str[i] == '.') {
                result = ans + "." + result;
                ans = "";
            }
            else{
                ans += str[i];
            }
        }
        
        result = ans + "." + result;
        
        return result.substr(0,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends
