//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        vector<pair<int,int>>arr;
        vector<int>answer;
        unordered_map<int,int>freqMap;
        for(int i = 0; i < nums.size(); i++) {
            if(freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else{
                freqMap[nums[i]] = 1;
            }
        }
        
        for(auto it : freqMap) {
            arr.push_back({it.second,it.first});
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(int i = 0; i < k; i++) {
            answer.push_back(arr[i].second);
        }
        return answer; 
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
