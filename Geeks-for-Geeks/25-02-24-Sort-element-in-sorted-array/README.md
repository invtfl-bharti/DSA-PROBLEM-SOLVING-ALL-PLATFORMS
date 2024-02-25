# Array Element Search

This repository contains a solution to the problem of finding the first occurrence of a given element in an integer array.

## Problem Statement

Given an integer array and another integer element, the task is to find if the given element is present in the array or not.

### Example 1

Input:
n = 4
arr[] = {1, 2, 3, 4}
x = 3

vbnet
Copy code

Output: `2`

Explanation: There is one test case with an array as {1, 2, 3, 4} and an element to be searched as 3. Since 3 is present at index 2, the output is 2.

### Example 2

Input:
n = 5
arr[] = {1, 2, 3, 4, 5}
x = 5

perl
Copy code

Output: `4`

Explanation: For array elements {1, 2, 3, 4, 5}, the element to be searched is 5, and it is at index 4. So, the output is 4.

## Implementation

The task is implemented in the function `search()` which takes the array `arr[]`, its size `N`, and the element `X` as inputs and returns the index of the first occurrence of `X` in the given array. If the element `X` does not exist in the array, the function returns `-1`.

**Expected Time Complexity:** `O(n)`

**Expected Auxiliary Space:** `O(1)`
