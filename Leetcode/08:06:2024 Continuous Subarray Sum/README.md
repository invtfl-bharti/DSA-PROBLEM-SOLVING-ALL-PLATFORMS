# Continuous Subarray Sum

## Problem Statement

Given an integer array `nums` and an integer `k`, return true if `nums` has a good subarray or false otherwise.

A good subarray is a subarray where:
- Its length is at least two, and
- The sum of the elements of the subarray is a multiple of `k`.

**Note that:**
- A subarray is a contiguous part of the array.
- An integer `x` is a multiple of `k` if there exists an integer `n` such that `x = n * k`. 0 is always a multiple of `k`.

### Examples

**Example 1:**

Input:  
`nums` = [23,2,4,6,7], `k` = 6  

Output:  
true  

Explanation:  
[2, 4] is a continuous subarray of size 2 whose elements sum up to 6.

**Example 2:**

Input:  
`nums` = [23,2,6,4,7], `k` = 6  

Output:  
true  

Explanation:  
[23, 2, 6, 4, 7] is a continuous subarray of size 5 whose elements sum up to 42.  
42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.

**Example 3:**

Input:  
`nums` = [23,2,6,4,7], `k` = 13  

Output:  
false  

## Constraints:

- 1 <= `nums.length` <= 10^5
- 0 <= `nums[i]` <= 10^9
- 0 <= sum(`nums[i]`) <= 2^31 - 1
- 1 <= k <= 2^31 - 1

## Approach

To solve this problem, we can use a hashmap to store the prefix sum of the array modulo `k`. If the prefix sum modulo `k` repeats, that means there is a subarray whose sum is a multiple of `k`.


## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the checkSubarraySum() function in your C++ code.
3. Call the checkSubarraySum() function with the array nums and integer k as input to check if nums has a good subarray.