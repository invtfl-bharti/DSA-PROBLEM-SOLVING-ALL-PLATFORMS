//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    bool isPrime(int n) {
        if(n<= 1) {
            return false;
        }
        if(n == 2 || n == 3) {
            return true;
        }
        if(n % 2 == 0 || n % 3 == 0) {
            return false;
        }
        for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
        
    }
    
    
    long long maximumSum(int n, int k) {
        // code here
        vector<long long>oddNonPrimes;
        for(int i = 1; i <= n; i+=2) {
            if(!isPrime(i)) {
                oddNonPrimes.push_back(i);
            }
        }
        if(oddNonPrimes.size() < k)  {
            return -1;
        }
        sort(oddNonPrimes.rbegin(), oddNonPrimes.rend());
        
        long long sum = 0;
        for(int i = 0; i < k; i++) {
            sum += oddNonPrimes[i];
        }
        
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int k;
        scanf("%d", &k);

        Solution obj;
        long long res = obj.maximumSum(n, k);

        cout << res << endl;
    }
}

// } Driver Code Ends
