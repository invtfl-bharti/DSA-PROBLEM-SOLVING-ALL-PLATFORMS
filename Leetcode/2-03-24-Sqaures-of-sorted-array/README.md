# Squares of Sorted Array

This repository contains a C++ solution for the problem of squaring each number in a sorted array and returning the resulting array sorted in non-decreasing order.

## Problem Statement

Given an integer array `nums` sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

### Example:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

markdown
Copy code

### Constraints:

- 1 <= nums.length <= 10^4
- -10^4 <= nums[i] <= 10^4
- `nums` is sorted in non-decreasing order.

## Solution:

The solution involves squaring each number in the array, sorting the squared numbers, and returning the result.

## Implementation:

The solution is implemented in C++. You can find the source code in the `solution.cpp` file.

## Usage:

You can use the `sortedSquares()` function by including the `solution.cpp` file in your project and calling the function with the array `nums` as input.
