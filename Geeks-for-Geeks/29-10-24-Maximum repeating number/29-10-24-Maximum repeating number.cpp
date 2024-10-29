//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Returns maximum repeating element in arr[0..n-1].
    // The array elements are in range from 0 to k-1
    int maxRepeating(int k, vector<int>& arr) {
        // code here
        
        
        unordered_map<int,int>freqMap;
        for(int i = 0; i < arr.size(); i++) {
            freqMap[arr[i]]++;
        }
        
        int maxi = INT_MIN;
        for(it : freqMap) {
            if(it.second > maxi) {
                maxi = it.second;
            }
        }
        
        sort(arr.begin(),  arr.end());
        for(int i = 0; i < arr.size(); i++) {
            if(freqMap.find(arr[i]) != freqMap.end() && freqMap[arr[i]] == maxi) {
                return arr[i];
            }
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.maxRepeating(k, arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
