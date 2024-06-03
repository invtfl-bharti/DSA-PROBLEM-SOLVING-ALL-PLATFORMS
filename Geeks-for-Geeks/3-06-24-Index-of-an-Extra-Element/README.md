Given two sorted arrays of distinct elements. There is only 1 difference between the arrays. The first array has one element extra added in between. Find the index of the extra element.

Example 1:

Input: n = 7, a[] = {2,4,6,8,9,10,12}, b[] = {2,4,6,8,10,12}
Output: 4
Explanation: In the second array, 9 is missing and it's index in the first array is 4.
Example 2:

Input: n = 6, a[] = {3,5,7,9,11,13}, b[] = {3,5,7,11,13}
Output: 3
Your Task:
You don't have to take any input. Just complete the provided function findExtra() that takes array a[], b[], and size of a[] and returns the valid index (0-based indexing).

Expected Time Complexity: O(log n).
Expected Auxiliary Space: O(1).

Constraints:
2<=n<=105
1<=a[i],b[i]<=106
