# Palindrome Number

Given an integer `x`, return true if `x` is a palindrome, and false otherwise.

## Example

### Example 1:

Input: 
x = 121

makefile
Copy code

Output: 
true

vbnet
Copy code

Explanation: 
121 reads as 121 from left to right and from right to left.

### Example 2:

Input: 
x = -121

makefile
Copy code

Output: 
false

sql
Copy code

Explanation: 
From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

### Example 3:

Input: 
x = 10

makefile
Copy code

Output: 
false

vbnet
Copy code

Explanation: 
Reads 01 from right to left. Therefore it is not a palindrome.

## Constraints

-2^31 <= x <= 2^31 - 1

## Your Task

Your task is to write a function `isPalindrome(x)` which takes the integer `x` as input and re
