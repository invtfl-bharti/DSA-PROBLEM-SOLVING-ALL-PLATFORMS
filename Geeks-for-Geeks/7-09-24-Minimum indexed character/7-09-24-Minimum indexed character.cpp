//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    // Code here
	    unordered_set<char>freqMap;
	    string str = "";
	    for(int i = 0 ; i < patt.size(); i++) {
	        freqMap.insert(patt[i]);
	    }
	    
	    for(int i = 0 ; i < S.size(); i++) {
	        if(freqMap.find(S[i]) != freqMap.end()) {
	            str.push_back(S[i]);
	            return str;
	        }
	    }
	    
	    return "$";
	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends
