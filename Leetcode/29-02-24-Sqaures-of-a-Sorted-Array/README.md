# Squares of Sorted Array

Given an integer array `nums` sorted in non-decreasing order, the task is to return an array of the squares of each number sorted in non-decreasing order.

## Example:

### Input:
nums = [-4, -1, 0, 3, 10]

shell
Copy code

### Output:
[0, 1, 9, 16, 100]

markdown
Copy code

### Explanation:
- After squaring, the array becomes [16, 1, 0, 9, 100].
- After sorting, it becomes [0, 1, 9, 16, 100].

### Input:
nums = [-7, -3, 2, 3, 11]

shell
Copy code

### Output:
[4, 9, 9, 49, 121]

sql
Copy code

## Approach:

To solve this problem efficiently, we can use a two-pointer approach. Since the given array `nums` is sorted, we can utilize two pointers: one starting from the beginning (let's call it `left`) and one starting from the end (let's call it `right`). We'll compare the absolute values of `nums[left]` and `nums[right]`, square the larger absolute value, and add it to the result array from the end. We'll then move the corresponding pointer towards the center of the array. We repeat this process until both pointers meet in the middle.

