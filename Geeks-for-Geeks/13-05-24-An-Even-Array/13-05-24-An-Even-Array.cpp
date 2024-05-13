//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    int convertToEven(string s)
    {
        // Your code goes here
        // 'E' -> even
        // 'O' -> odd
        int count = 0;
        for(int i = 0;i < s.length(); i++) {
            if(s[i] == 'O' && s[i+1] != 'O') {
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
        Solution ob;
   		cout << ob.convertToEven(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
