Find the first non-repeating element in a given array arr of n integers and if there is not present any non-repeating element then return 0

Note: The array consists of only positive and negative integers and not zero.

Example 1:

Input :
n = 5
arr[] = {-1, 2, -1, 3, 2}
Output : 3
Explanation:
-1 and 2 are repeating whereas 3 is the only number occuring once. Hence, the output is 3. 
Example 2:

Input : 
n = 3
arr[] = {1, 1, 1}
Output : 0
Explanation:
there is not present any non-repeating element so answer should be 0.

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function firstNonRepeating() that takes an array (arr), sizeOfArray (n), and returns the first non-repeating element. if there is not present any non-repeating element then return 0

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 <= n <= 106
-109 <= arr[i] <= 109
arr[i] != 0 
