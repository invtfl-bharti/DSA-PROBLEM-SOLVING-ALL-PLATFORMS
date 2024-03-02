# First Element Occurring K Times

This repository contains a C++ solution for the problem of finding the first element that occurs at least k times in an array.

## Problem Statement

Given an array of n integers, find the first element that occurs at least k times. If no such element exists in the array, return -1.

### Example:

Input:
n = 7, k = 2
a[] = {1, 7, 4, 3, 4, 8, 7}
Output:
4

Input:
n = 10, k = 3
a[] = {3, 1, 3, 4, 5, 1, 3, 3, 5, 4}
Output:
3

perl
Copy code

### Your Task:

You are not required to read input or print anything. Your task is to complete the function `firstElementKTime()` which takes the array `a[]`, its size `n`, and an integer `k` as input arguments and returns the required answer. If the answer is not present in the array, return -1.

### Constraints:

- 1 <= n <= 10^4
- 1 <= k <= 100
- 0 <= a[i] <= 200

### Expected Time Complexity: 
O(n)

### Expected Auxiliary Space:
O(n)

## Solution:

The solution involves iterating through the array once and maintaining a frequency count of each element using a hash map. Then, iterate through the array again to find the first element that occurs at least k times.

## Implementation:

The solution is implemented in C++. You can find the source code in the `solution.cpp` file.

