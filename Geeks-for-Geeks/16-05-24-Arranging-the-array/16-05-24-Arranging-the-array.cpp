//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
          // Creating an array vector for appending the positive elements
            vector<int>pos;
          // Creating an array vector for appending the negative elements
            vector<int>neg;
          // Traversing the array and then push back the elements of array to the vector neg and pos
            for(int i = 0; i < n; i++) {
                if(arr[i] < 0) {
                    neg.push_back(arr[i]);
                }
                else if(arr[i] >= 0) {
                    pos.push_back(arr[i]);
                }
            }
          // Now insert the elements from the neg and pos to the array by array first the negative and then the positives
          // Incrementing j
            int j = 0;
            for(int i = 0; i < neg.size(); i++){
                arr[j] = neg[i];
                j++;
            }
            for(int i = 0;i < pos.size(); i++) {
                arr[j] = pos[i];
                j++;
            }
            
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends
