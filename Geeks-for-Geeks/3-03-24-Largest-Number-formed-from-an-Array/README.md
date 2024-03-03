# Arrange Numbers to Form the Largest Possible Number

This repository contains a C++ solution for the problem of arranging numbers in an array to form the largest possible number.

## Problem Statement

Given an array of strings `arr[]` of length `n` representing non-negative integers, arrange them in a manner such that, after concatenating them in order, it results in the largest possible number. Since the result may be very large, return it as a string.

### Example:

Input:
n = 5
arr[] = {"3", "30", "34", "5", "9"}
Output: "9534330"
Explanation:
Given numbers are {"3", "30", "34", "5", "9"},
the arrangement "9534330" gives the largest value.

csharp
Copy code

### Constraints:

- 1 ≤ n ≤ 10^5
- 0 ≤ arr[i] ≤ 10^18
- Sum of all the elements of the array is greater than 0.

## Solution:

The solution involves custom sorting of the strings based on a comparison function that concatenates two strings in different orders and compares them. This ensures that the resulting number after concatenation is the largest possible.

## Implementation:

The solution is implemented in C++. You can find the source code in the `solution.cpp` file.

## Usage:

You can use the `printLargest()` function by including the `solution.cpp` file in your project and 
