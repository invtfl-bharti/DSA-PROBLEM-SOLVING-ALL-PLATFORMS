class Solution{
public:
	int getSingle(int arr[], int n) {
	    // code here
	   int result = 0;
	   for(int i=0;i<n;i++) {
	       result^=arr[i];
	   }
	   return result;
	}
};
