# Index of an Extra Element

## Problem Statement

You are given two sorted arrays arr1[] & arr2[] of distinct elements. The first array has one element extra added in between. Return the index of the extra element.

Note: 0-based indexing is followed.

### Examples

**Example 1:**

Input:  
n = 7  
arr1[] = {2,4,6,8,9,10,12}  
arr2[] = {2,4,6,8,10,12}  

Output:  
4  

Explanation:  
In the first array, 9 is extra added and its index is 4.

**Example 2:**

Input:  
n = 6  
arr1[] = {3,5,7,8,11,13}  
arr2[] = {3,5,7,11,13}  

Output:  
3  

Explanation:  
In the first array, 8 is extra, and its index is 3.

## Constraints:

- 1 <= n <= 10^5
- 1 <= arr1[i], arr2[i] <= 10^6

## Approach

Since the arrays are sorted, we can use binary search to find the extra element. We can compare the middle elements of both arrays. If they are equal, the extra element lies in the right subarray, otherwise, it lies in the left subarray. We continue this process until we find the extra element.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the findExtra() function in your Python code.
3. Call the findExtra() function with the two arrays arr1 and arr2, and their size n as input to get the index of the extra element.
