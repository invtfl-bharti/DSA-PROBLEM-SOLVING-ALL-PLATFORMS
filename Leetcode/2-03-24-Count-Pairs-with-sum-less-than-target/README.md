# Count Pairs with Sum Less Than Target

This repository contains a C++ solution for the problem of counting the number of pairs of indices `(i, j)` where `0 <= i < j < n` and `nums[i] + nums[j] < target`.

## Problem Statement

Given a 0-indexed integer array `nums` of length `n` and an integer `target`, return the number of pairs `(i, j)` where `0 <= i < j < n` and `nums[i] + nums[j] < target`.

### Example:

Input: nums = [-1,1,2,3,1], target = 2
Output: 3
Explanation: There are 3 pairs of indices that satisfy the conditions in the statement:

(0, 1) since 0 < 1 and nums[0] + nums[1] = 0 < target
(0, 2) since 0 < 2 and nums[0] + nums[2] = 1 < target
(0, 4) since 0 < 4 and nums[0] + nums[4] = 0 < target
Note that (0, 3) is not counted since nums[0] + nums[3] is not strictly less than the target.
vbnet
Copy code

### Constraints:

- 1 <= nums.length == n <= 50
- -50 <= nums[i], target <= 50

## Solution:

The solution involves using two pointers technique. We'll sort the array and then use two pointers to iterate through the array and count the number of pairs satisfying the condition `nums[i] + nums[j] < target`.

## Implementation:

The solution is implemented in C++. You can find the source code in the `solution.cpp` file.

## Usage:

You can use the `numPairsLessThanTarget()` function by including the `solution.cpp` file in your project and calling the function with the array `nums` and the integer `target` as input.
