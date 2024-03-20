//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long totalSum = 0;
        long leftSum = 0;
        long rightSum = 0;
        if(n==1) {
            return 1;
        }
        for(int i=0;i<n;i++) {
            totalSum+=a[i];
        }
        for(int i=0;i<n;i++) {
            leftSum+=a[i];
            rightSum = totalSum-leftSum;
            // i!=n-1 is because there has to be an equilibrium point which is the nearest from the
            // start 
            // test case of [-7, 1, 5, 2, -4, 3 ,0] where leftSum and right Sum of a[i] = 2
            // is equal and also a[i] =0 has equal sum on the left and right side
            if(leftSum-a[i]==rightSum && i!=n-1) {
                  return i+1;
            }
            if(leftSum>rightSum) {
                break;
            }
            
        }
        return -1;
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
