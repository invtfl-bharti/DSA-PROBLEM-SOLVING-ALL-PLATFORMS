# Find the Element Occurring Odd Number of Times Problem

## Description
Given an array Arr of positive integers of size N where every element appears even times except for one, find the element occurring odd number of times.

## Input
Input consists of an integer N representing the size of the array, followed by N integers representing the elements of the array.

## Output
Output should be an integer representing the element occurring odd number of times in the array.

## Example
- **Input:** N = 5, Arr[] = {1, 1, 2, 2, 2}
  **Output:** 2
  **Explanation:** In the given array, all elements appear two times except 2 which appears thrice.

- **Input:** N = 7, Arr[] = {8, 8, 7, 7, 6, 6, 1}
  **Output:** 1
  **Explanation:** In the given array, all elements appear two times except 1 which appears once.

## Constraints
- 1 ≤ N ≤ 10^7
- 0 ≤ Arr[i] ≤ 10^8

## Function Signature
```cpp
int getSingle(int arr[], int n);
