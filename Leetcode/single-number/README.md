# Single Number

Given a non-empty array of integers `nums`, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

## Example

### Example 1:

Input: 
nums = [2, 2, 1]

makefile
Copy code

Output: 
1

makefile
Copy code

### Example 2:

Input: 
nums = [4, 1, 2, 1, 2]

makefile
Copy code

Output: 
4

makefile
Copy code

### Example 3:

Input: 
nums = [1]

makefile
Copy code

Output: 
1

sql
Copy code

## Constraints

- 1 <= nums.length <= 3 * 10^4
- -3 * 10^4 <= nums[i] <= 3 * 10^4
- Each element in the array appears twice except for one element which appears only once.

## Your Task

Your task is to write a function `singleNumber(nums)` which takes the non-empty array of integer
