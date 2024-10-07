Given a sorted array arr and a value x, return an array of size 2. The first value is the number of elements less than or equal to x, and the second value is the number of elements greater than or equal to x.

Examples:

Input: arr[] = [1, 2, 8, 10, 11, 12, 19],  x = 0
Output: 0, 7
Explanation: There are no elements less or equal to 0 and 7 elements greater to 0.
Input: arr[] = [1, 5, 8, 12, 12, 12, 19], x = 12
Output: 6, 4
Explanation: There are 6 elements less or equal to 12 and 4 elements greater or equal to 12.
Expected Time Complexity: O(logn)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size ≤ 105
0 ≤ arr[i], x ≤ 106
