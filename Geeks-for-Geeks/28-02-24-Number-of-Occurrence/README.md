# Count Occurrences of an Element in a Sorted Array

## Problem Description

Given a sorted array `Arr` of size `N` and a number `X`, you need to find the number of occurrences of `X` in `Arr`.

### Examples

**Example 1:**

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}

makefile
Copy code
Output:
4

makefile
Copy code
Explanation:
2 occurs 4 times in the given array.

less
Copy code

**Example 2:**

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}

makefile
Copy code
Output:
0

makefile
Copy code
Explanation:
4 is not present in the given array.

vbnet
Copy code

## Approach

The problem can be efficiently solved using binary search. Here's a brief overview of the approach:

1. Perform binary search to find the first occurrence of `X`.
2. Perform binary search to find the last occurrence of `X`.
3. Return the count of occurrences of `X` as the difference between the indices of the first and last occurrences (plus 1).

