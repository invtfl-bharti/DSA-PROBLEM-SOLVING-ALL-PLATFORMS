```cpp
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        // create a string
        string str;
        // looping throught the string till it reaches 0
        // as the number of iterations is not known beforehand, while loop will be used and it will be looping
        // through till it reaches 0
        while(r--) {
            // initialize the string
            str = "";
            // then check if 0 is an element of a string then add 01 to the string else 10 if there's any
            // other number
            for(int ch=0;ch<s.size();ch++) {
                if(s[ch]=='0') {
                    str+="01";
                }
                else {
                    str+="10";
                }
                // Check if the size of 'str' has become greater than or equal to the size of the original string 's'
            // If so, break out of the loop to avoid unnecessary iterations
                if(str.size()>=s.size()) {
                    break;
                }
                
            }
            s = str;
        }
        
        
        return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends
