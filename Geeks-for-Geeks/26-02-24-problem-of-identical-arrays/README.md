# Identical Arrays

This repository contains a solution to determine if two arrays of size N are identical or not.

## Problem Statement

Two arrays of size N are called identical arrays if they contain the same elements. The order of elements in both arrays could be different; however, both arrays must contain the same elements. Given two arrays A[] and B[] of size N, determine if the arrays are identical or not.

### Example

#### Input
A[] = {1, 2, 3, 4, 5}
B[] = {3, 4, 1, 2, 5}

shell
Copy code

#### Output
1

sql
Copy code

Explanation: Array B[] is a permutation of array A[], so both arrays are identical.

#### Input
A[] = {1, 2, 4}
B[] = {3, 2, 1}

shell
Copy code

#### Output
0

sql
Copy code

Explanation: The elements in arrays A[] and B[] are different, so the arrays are not identical.

## Approach

To determine if two arrays are identical, we can sort both arrays and then check if the sorted arrays are the same. If they are, then the original arrays are identical.

## Implementation

The solution is implemented in the `check()` function, which takes two arrays (`arr` and `brr`), their sizes (`n`), and returns 1 if the arrays are identical, and 0 otherwise.

## Usage

To use this solution, you can include the `check()` function in your code and pass the two arrays along with their sizes.

## Constraints

- 1 ≤ N ≤ 10^5
- 0 ≤ A[i] ≤ 9

## Complexity Analysis

- **Time Complexity:** O(NLog(N)) due to sorting.
- **Auxiliary Space:** O(1) since the solution uses a constant amount of extra space.
