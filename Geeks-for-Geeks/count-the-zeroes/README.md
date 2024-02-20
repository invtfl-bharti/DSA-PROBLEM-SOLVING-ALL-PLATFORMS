# Count Zeroes in Sorted Array Problem

## Description
Given a sorted array Arr of size N consisting of only 0's and 1's, find the count of all the 0's in the array.

## Input
Input consists of an integer N representing the size of the array, followed by N integers representing the elements of the sorted array containing only 0's and 1's.

## Output
Output should be an integer representing the count of zeroes present in the array.

## Example
- **Input:** N = 12, Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
  **Output:** 3
  **Explanation:** There are 3 zeroes in the given array.

- **Input:** N = 5, Arr[] = {0, 0, 0, 0, 0}
  **Output:** 5
  **Explanation:** There are 5 zeroes in the array.

## Constraints
- 1 <= N <= 10^5
- 0 <= Arr[i] <= 1

## Function Signature
```cpp
int countZeroes(int arr[], int n);
