# Segregate 0s and 1s Problem

## Description
Given an array of length n consisting of only 0's and 1's in random order, modify the array in-place to segregate 0s on the left side and 1s on the right side of the array.

## Input
- An integer n representing the length of the array.
- An array arr[] of length n consisting of only 0's and 1's.

## Output
- Modify the array arr[] in-place such that all 0's are on the left side and all 1's are on the right side of the array.

## Example
- **Input:** n = 5, arr[] = {0, 0, 1, 1, 0}
  **Output:** {0, 0, 0, 1, 1}
  **Explanation:** After segregating all 0's on the left and 1's on the right, the modified array will be {0, 0, 0, 1, 1}.
  
- **Input:** n = 4, arr[] = {1, 1, 1, 1}
  **Output:** {1, 1, 1, 1}
  **Explanation:** There are no 0's in the given array, so the modified array remains unchanged {1, 1, 1, 1}.

## Constraints
- 1 ≤ n ≤ 10^6
- 0 ≤ arr[i] ≤ 1

## Function Signature
```cpp
void segregate0and1(int arr[], int n);
