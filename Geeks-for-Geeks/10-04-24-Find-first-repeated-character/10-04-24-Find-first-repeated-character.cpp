  //{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_map<char,int>freqMap;
    string str="";
    for(int i=0;i<s.size();i++) {
        freqMap[s[i]]++;
        if(freqMap[s[i]]>1){
            str.push_back(s[i]);
            return str;
        }
    }
    return "-1";
    
}
