//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string k = ""; // Initialize k properly
    stringstream iss(S);
    string token;

    while (std::getline(iss, token, '.')) {
        if (!k.empty()) {
            k = token + "." + k; // Append the token and period to k
        } else {
            k = token; // No need for a period at the end
        }
    }

    return k;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
