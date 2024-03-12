# Generalized Fibonacci Number

This repository contains a solution to the problem of calculating the generalized Fibonacci number `g(n)` modulo `m`, given the coefficients `a`, `b`, and `c`.

## Problem Statement

The generalized Fibonacci number `g(n)` is defined as follows:

- `g(1) = 1`
- `g(2) = 1`
- For any other number `n`, `g(n) = a*g(n-1) + b*g(n-2) + c`.

Given the coefficients `a`, `b`, and `c`, along with the values of `n` and `m`, the task is to determine `g(n)%m`.

### Example

For example, consider the following input:

a = 3
b = 3
c = 3
n = 3
m = 5

go
Copy code

The output would be `4`.

Explanation:
g(1) = 1 and g(2) = 1
g(3) = 3g(2) + 3g(1) + 3 = 31 + 31 + 3 = 9
We need to return answer modulo 5, so 9%5 = 4, is the answer.

perl
Copy code

## Approach

To solve this problem efficiently, we use matrix exponentiation to calculate the `n`-th term of the sequence modulo `m`.

### Time Complexity

The expected time complexity of the solution is O(log(n)).

### Space Complexity

The expected auxiliary space complexity is O(1).
