//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.size()!=str2.size() || str1.size() == 1) return 0;
        string concat = str1 + str1;
        if(concat.find(str2) == 2 || concat.find(str2) == str1.size()-2) return 1;
        else return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends
