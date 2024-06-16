//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        unordered_map<char,int>freqMap;
        for(int i = 0; i < patt.length(); i++) {
            if(freqMap.find(patt[i]) != freqMap.end()) {
                freqMap[patt[i]]++;
            }
            else{
                freqMap[patt[i]] = 1;
            }
        }
        for(int i = 0; i < str.length(); i++) {
            
            if(freqMap[str[i]] > 0) {
                return i;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends
