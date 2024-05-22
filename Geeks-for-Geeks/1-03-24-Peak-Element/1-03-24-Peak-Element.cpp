//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n==0) {
           return 0;
       }
       int left = 0;
       int right = n-1;
    //   single element is not required as the single element will not be the peak element
       while(left<right) {
           int mid = left+(right-left)/2;
        //   as the array is sorted mid has to be greater than or equal to the next number i.e mid+1
           if( arr[mid]>=arr[mid+1]) {
            //   if mid is greater then the peak element will be declared as the mid
               right = mid;
           }
        //   if the mid is lesser,then move to the next element
           
           else{
               left = mid+1;
           }
       }
       
    //   If the any of these doesn't satisfy the conditions then all three are equal then the first element will be retured
       return left;
       
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob. peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
    		if(n==1 and A==0)
    		    f=1;
    		else if(A==0 and a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 and a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		cout<<f<<endl;
		}


		
		
	}

	return 0;
}
// } Driver Code Ends
