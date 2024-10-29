Given an array arr[]. The array contains numbers ranging from 0 to k-1 where k is a positive integer and k<=n. Find the maximum repeating number in this array. If there are two or more maximum repeating numbers, return the element with the least value.

Examples:

Input: k = 3, arr[] = [2, 2, 1, 2]
Output: 2
Explanation: 2 is the most frequent element.
Input: k = 3, arr[] = [2, 2, 1, 0, 0, 1]
Output: 0
Explanation: 0, 1, and 2 all have the same frequency of 2. But since 0 is the smallest, you need to return 0.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(k)

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ k ≤ arr.size()
0 ≤ arri ≤ k-1
