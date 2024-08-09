//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // Complete the function
        
        long long left = 0;
        long long index = 0;
        long long sum = 0;
        long long modulo = 1000000007;
        sort(arr.begin(),arr.end());
        while(left < arr.size() && index < arr.size()) {
            sum += arr[left] * index;
            index++;
            left++;
        }
        return sum % modulo;
    }
};

//{ Driver Code Starts.
int main() {

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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends
