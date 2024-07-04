//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string,int>freqMap;
           int count= 0;
           for(int i=0;i<n;i++) {
               if(freqMap.find(list[i]) != freqMap.end()){
                   freqMap[list[i]]++;
               }
               else {
                   freqMap[list[i]] = 1;
               }
               
           }
           
            for(auto i : freqMap) {
                if(i.second == 2) {
                    count++;
                }
            }

           return count;
        }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
