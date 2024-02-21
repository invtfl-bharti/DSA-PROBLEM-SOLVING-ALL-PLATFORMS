Problem Description
Given an array arr[] of n positive integers, push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. Do this change in the array in-place.

Example
vbnet
Copy code
Input:
N = 5
Arr[] = {3, 5, 0, 0, 4}
Output: 3 5 4 0 0
Explanation: The non-zero elements preserve their order while the 0 elements are moved to the right.
vbnet
Copy code
Input:
N = 4
Arr[] = {0, 0, 0, 4}
Output: 4 0 0 0
Explanation: 4 is the only non-zero element and it gets moved to the left.
Constraints
1 ≤ N ≤ 10^5
0 ≤ arr[i] ≤ 10^5
Java Solution
java
