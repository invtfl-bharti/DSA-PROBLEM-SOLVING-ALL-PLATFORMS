# Increment Large Integer

This repository contains a Python function to increment a large integer represented as an array of digits by one. The function takes an array of digits as input and returns the resulting array after incrementing the integer.

## Problem Statement

You are given a large integer represented as an integer array `digits`, where each `digits[i]` is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Your task is to increment the large integer by one and return the resulting array of digits.

### Examples

**Example 1:**

**Input:** 
digits = [1, 2, 3]

makefile
Copy code
**Output:** 
[1, 2, 4]

sql
Copy code
**Explanation:** 
The array represents the integer 123. Incrementing by one gives 123 + 1 = 124. Thus, the result should be [1, 2, 4].

**Example 2:**

**Input:** 
digits = [4, 3, 2, 1]

makefile
Copy code
**Output:** 
[4, 3, 2, 2]

sql
Copy code
**Explanation:** 
The array represents the integer 4321. Incrementing by one gives 4321 + 1 = 4322. Thus, the result should be [4, 3, 2, 2].

**Example 3:**

**Input:** 
digits = [9]

makefile
Copy code
**Output:** 
[1, 0]

vbnet
Copy code
**Explanation:** 
The array represents the integer 9. Incrementing by one gives 9 + 1 = 10. Thus, the result should be [1, 0].

### Constraints

- 1 <= digits.length <= 100
- 0 <= digits[i] <= 9
- digits does not contain any leading 0's.

## Approach

The problem can be solved by iterating through the array of digits from right to left, starting from the least significant digit. We increment each digit by one until we encounter a digit less than 9. If all digits are 9, we add an additional digit at the beginning of the array and set it to 1.

## Usage

To use the provided Python function, simply call `increment_large_integer(digits)` and pass the array of digits as an argument. It will return the resulting array after incrementing the large integer.

```python
digits = [1, 2, 3]
result = increment_large_integer(digits)
print("Result:", result)  # Output: [1, 2, 4]
Complexity Analysis
Time Complexity: O(n) - where n is the number of digits in the array.
Space Complexity: O(1) - Constant space is used as the operations are performed in place.
Feel free to use this implementation in your projects or contribute improvements!
