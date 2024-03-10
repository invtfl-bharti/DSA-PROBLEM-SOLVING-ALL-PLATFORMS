//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	   // Initialize an empty string to store the result
	    string s = "";
	   // Initialize an unordered map to keep track of character frequencies
	    unordered_map<char,int>freqMap;
	   // loop throught the string
	    for(int i=0;i<str.length();i++) {
	       // if the character or the current element is already present in the freqMap then skip
	       //and continue it
	        if(freqMap.find(str[i])!=freqMap.end()){
	            continue;
	        }
	       // if it is not present then add it to the string and set the frequency character to 1
	        else{
	            freqMap[str[i]]  = 1;
	            s+=str[i];
	        }
	    }
	   // return the string
	    return s;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
