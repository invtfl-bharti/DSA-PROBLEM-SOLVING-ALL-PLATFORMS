# Kth Smallest Element in an Array

Given an array arr[] and an integer K where K is smaller than size of the array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

## Example

### Example 1:

Input:
N = 6
arr[] = {7, 10, 4, 3, 20, 15}
K = 3
L = 0
R = 5

makefile
Copy code

Output:
7

makefile
Copy code

Explanation:
The 3rd smallest element in the given array is 7.

### Example 2:

Input:
N = 5
arr[] = {7, 10, 4, 20, 15}
K = 4
L = 0
R = 4

makefile
Copy code

Output:
15

markdown
Copy code

Explanation:
The 4th smallest element in the given array is 15.

## Constraints

- 1 <= N <= 10^5
- 1 <= arr[i] <= 10^5
- 1 <= K <= N
- L == 0
- R == N-1

## Your Task

Your task is to complete the function `kthSmallest()` which takes the array `arr[]`, integers `l` and `r` denoting the starting and ending index of the array, and an integer `K` as input, and returns the Kth smallest element.

## Expected Time Complexity

O(n*log(n))

## Expected Auxiliary Space

O(log(n))
