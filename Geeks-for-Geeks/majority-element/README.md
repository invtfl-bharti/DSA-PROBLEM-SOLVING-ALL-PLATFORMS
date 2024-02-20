# Majority Element Problem

## Description
Given an array A of N elements, find the majority element in the array. A majority element is an element that appears strictly more than N/2 times in the array.

## Input
Input consists of an integer N representing the number of elements in the array, followed by N integers representing the elements of the array.

## Output
Output should be an integer representing the majority element in the array. If no majority exists, return -1.

## Example
- **Input:** N = 3, A[] = {1,2,3}
  **Output:** -1
  **Explanation:** Each element appears only once, so there is no majority element.

- **Input:** N = 5, A[] = {3,1,3,3,2}
  **Output:** 3
  **Explanation:** 3 is present more than N/2 times, so it is the majority element.

## Constraints
- 1 ≤ N ≤ 10^7

## Function Signature
```cpp
int majorityElement(int N, int A[]);
