//{ Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        //Your code here
        vector<int>arr;
        unordered_map<int,int>freqMap;
        for(int i = 0; i < N; i++) {
            if(freqMap.find(arr1[i]) != freqMap.end()) {
                freqMap[arr1[i]]++;
            }
            else{
                freqMap[arr1[i]] = 1;
            }
        }
        for(int i = 0; i < M; i++) {
             int ans=arr2[i];
        if(freqMap.find(ans)!=freqMap.end())
        {
            arr.push_back(ans);
        }
        freqMap.erase(ans);
        }
        return arr;
        
    }

};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        Solution ob;
        // Function calling 
        vector<int> v;
        v = ob.printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 

// } Driver Code Ends
