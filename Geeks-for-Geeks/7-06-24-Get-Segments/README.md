You are given an array of integers, arr of size n, and an integer x. Your task is to divide the array
into consecutive segments such that the OR of each segment is less than or equal to x. Return
the minimum number of segments needed to achieve this.
Note: For the answer to always exist x will always be greater than or equal to the maximum
element of the array
Examples:
Input: arrl] = {1, 2, 3, 4}, n = 4, x = 4
Output: 2
Explanation: One possible segmentation is {1, 2, 3} and {4} where OR of the first
segment 1|213 = 3 and OR of the second segment
44 are both less than or equal to 4.
Input: arrl] = {4, 8, 12, 16}, n = 4, × = 50
Output: 1
Explanation: One possible segmentation is {4, 8, 12, 16}
Your Task:
You don't have to read input or print anything. Complete the function getSegments) which takes
the array arril, n, and x, and return the minimum number of segments.
Constraints:
1<=arrlil<=109
1<=n<=106
0<=x<=109
