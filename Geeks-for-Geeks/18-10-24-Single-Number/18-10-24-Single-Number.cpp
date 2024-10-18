//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int ele = 0;
        unordered_map<int,int>freqMap;
        for(int i = 0; i < arr.size(); i++) {
            if(freqMap.find(arr[i]) != freqMap.end()) {
                freqMap[arr[i]]++;
            }
            else{
                freqMap[arr[i]] = 1;
            }
        }
        for(auto it : freqMap) {
            if(it.second % 2 != 0) {
                ele = it.first;
            }
        }
        return ele;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getSingle(arr);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends
