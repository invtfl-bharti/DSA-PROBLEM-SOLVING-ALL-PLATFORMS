# Bitwise XOR of Array Elements

This repository contains a solution to compute the bitwise XOR of elements in an array generated based on given parameters.

## Problem Statement

You are given an integer `n` and an integer `start`. Define an array `nums` where `nums[i] = start + 2 * i` (0-indexed) and `n == nums.length`. Return the bitwise XOR of all elements of `nums`.

### Example

#### Input
n = 5
start = 0

shell
Copy code

#### Output
8

vbnet
Copy code

Explanation: Array `nums` is equal to `[0, 2, 4, 6, 8]` where `(0 ^ 2 ^ 4 ^ 6 ^ 8) = 8`. "^" corresponds to the bitwise XOR operator.

#### Input
n = 4
start = 3

shell
Copy code

#### Output
8

markdown
Copy code

Explanation: Array `nums` is equal to `[3, 5, 7, 9]` where `(3 ^ 5 ^ 7 ^ 9) = 8`.

