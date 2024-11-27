//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int element = 0;
        
        unordered_map<int,int>freqMap;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > 0) {
                freqMap[arr[i]]++;
            }
            else{
                freqMap[arr[i]] = 1;
            }
        }
        
        int n = freqMap.size();
        
        for(int i = 1; i <= n; i++) {
            if(freqMap.find(i) == freqMap.end()) {
                return i;
            } 
        }
        return n + 1;
    }
};

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends
