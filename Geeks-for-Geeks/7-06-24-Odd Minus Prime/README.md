Given a positive integer n. The problem is to find the maximum sum of exactly k integers from the
set of numbers [1,2,3...,n] which are odd, but not prime. If the answer is not possible, return -1.
Example 1:
Input:
n = 10, k = 2
Output: 10
Explanation: There are only two integers between 1 and 10, which are odd, but not
prime, those are, 1 and 9. The sum of 1 and 9 is 10.
Example 2:
Input:
n = 5, k = 2
Output: -1
Explanation: There is only one integer between 1 and 5, which is odd, but not
prime. Hence, the answer is not possible.
Your Task:
You don't need to read input or print anything. Your task is to complete the
function maximumSum) which takes the integer n and k, as input parameters and returns the
integer value.
Constraints:
1 <= n, k <= 106
