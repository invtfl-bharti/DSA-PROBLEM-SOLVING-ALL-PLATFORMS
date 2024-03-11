# Count Pairs with Given Sum in Two Sorted Matrices

This repository contains a solution to the problem of finding and counting all pairs from two sorted matrices whose sum is equal to a given target value.

## Problem Statement

Given two sorted matrices `mat1` and `mat2` of size `n x n`, each containing numbers arranged in strictly ascending order, along with a target value `x`, the task is to find and count all pairs {a, b} such that a is from `mat1` and b is from `mat2`, and the sum of a and b is equal to x.

### Example

For example, consider the following input:

n = 3, x = 21
mat1 = {{1, 5, 6},
{8, 10, 11},
{15, 16, 18}}
mat2 = {{2, 4, 7},
{9, 10, 12},
{13, 16, 20}}

python
Copy code

The output would be `4`, as the pairs whose sum is found to be 21 are (1, 20), (5, 16), (8, 13), and (11, 10).

## Approach

The solution uses a two-pointer approach to iterate over both matrices and find pairs whose sum equals the target value `x`.

### Time Complexity

The expected time complexity of the solution is O(n^2), where n is the size of the matrices.

### Space Complexity

The expected auxiliary space complexity is O(1)
