# Peak Element

Given an array of integers, find its peak element. An element is considered a peak if it's greater than or equal to its adjacent elements (if they exist).

## Example

Input:
n = 3
arr[] = {1, 2, 3}

vbnet
Copy code

Peak element's index: 2
Output: 1

## Approach

The problem can be solved using a modified binary search approach to find the peak element in O(log(n)) time complexity.

- Start with two pointers, left = 0 and right = n - 1, where n is the size of the array.
- While left < right, find the mid element.
- If arr[mid] > arr[mid + 1], set right = mid, since a peak can be on the left side.
- Otherwise, set left = mid + 1, since a peak can be on the right side.
- Return left as the peak element.

## Complexity Analysis

- Time complexity: O(log(n)), where n is the size of the array.
- Auxiliary space complexity: O(1).

## Constraints

- 1 ≤ n ≤ 10^5
- 1 ≤ arr[i] ≤ 10^6
