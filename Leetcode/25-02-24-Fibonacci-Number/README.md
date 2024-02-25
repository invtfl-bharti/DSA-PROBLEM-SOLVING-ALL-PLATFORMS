# Fibonacci Number

This repository contains a solution to calculate the Fibonacci number for a given value of 'n'.

## Problem Statement

The Fibonacci numbers form a sequence such that each number is the sum of the two preceding ones, starting from 0 and 1. The formula to calculate Fibonacci number for 'n' is:

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1

Given a value 'n', calculate F(n).

### Example

#### Input
n = 2

shell
Copy code

#### Output
1

typescript
Copy code

Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

## Implementation

The solution to this problem is implemented in [your_file.py](link_to_your_file), where `fibonacci(n)` function calculates the Fibonacci number for a given value of 'n'.

## Usage

To use this solution, you can include the `fibonacci(n)` function in your code and pass the value of 'n' for which you want to calculate the Fibonacci number.

```python
result = fibonacci(5)
print(result)  # Output: 5
Constraints
0 <= n <= 30
