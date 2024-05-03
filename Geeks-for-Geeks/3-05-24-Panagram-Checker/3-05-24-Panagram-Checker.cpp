//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        unordered_map<char, int> freqMap;

    // Convert the string to lowercase
    for (char& i : s) {
        i = tolower(i);
    }

    // Count frequencies of characters in the lowercase string
    for (char i : s) {
        if (isalpha(i)) { 
            freqMap[i]++;
        }
    }

    // Check if all alphabets are present at least once
    for (char c = 'a'; c <= 'z'; c++) {
        if (freqMap.find(c) == freqMap.end() || freqMap[c] == 0) {
            return false;
        }
    }
    return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends
