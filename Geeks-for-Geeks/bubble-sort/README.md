# Bubble Sort Algorithm Problem

## Description
Given an integer N and an array arr, sort the array using the bubble sort algorithm.

## Input
Input consists of an integer N representing the size of the array, followed by N integers representing the elements of the array.

## Output
Output should be the sorted array using the bubble sort algorithm.

## Example
- **Input:** N = 5, arr[] = {4, 1, 3, 9, 7}
  **Output:** 1 3 4 7 9
  **Explanation:** After sorting, the array becomes {1, 3, 4, 7, 9}.

- **Input:** N = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
  **Output:** 1 2 3 4 5 6 7 8 9 10
  **Explanation:** After sorting, the array becomes {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}.

## Constraints
- 1 <= N <= 10^3
- 1 <= arr[i] <= 10^3

## Function Signature
```cpp
void bubblesort(int arr[], int N);
