# Swap Elements in Array

Given an array `arr` of `n` positive integers, the task is to swap every `ith` element of the array with `(i+2)th` element.

## Example:

### Input:
n = 3
arr[] = {1, 2, 3}

shell
Copy code

### Output:
3 2 1

csharp
Copy code

### Explanation:
- Swapping 1 and 3 makes the array 3 2 1. There is only one swap possible in this array.

### Input:
n = 5
arr[] = {1, 2, 3, 4, 5}

shell
Copy code

### Output:
3 4 5 2 1

csharp
Copy code

### Explanation:
- Swapping 1 and 3 makes the array 3 2 1 4 5.
- Swapping 2 and 4 makes the array 3 4 1 2 5.
- Again, swapping 1 and 5 makes the array 3 4 5 2 1.

## Approach:

To solve this problem, we can iterate through the array and swap every `ith` element with `(i+2)th` element.

