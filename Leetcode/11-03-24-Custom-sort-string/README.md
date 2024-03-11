# Custom Order Permutation

This repository contains a solution to the problem of permuting the characters of a string `s` to match a given custom order specified by string `order`.

## Problem Statement

Given two strings `order` and `s`, where all the characters of `order` are unique and sorted in some custom order previously, the task is to permute the characters of `s` so that they match the order specified by `order`. Specifically, if a character x occurs before a character y in `order`, then x should occur before y in the permuted string.

### Example

For example, consider the following input:

order = "cba"
s = "abcd"

vbnet
Copy code

The output would be `"cbad"`. Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

## Approach

The solution to this problem involves sorting the characters of string `s` based on their order in the `order` string. This can be done by creating a hashmap to store the positions of characters in `order`, then sorting `s` using a custom comparator function based on these positions.

### Time Complexity

The time complexity of the solution is O(n*log(n)), where n is the length of the input string `s`.

### Space Complexity

The space complexity of the solution is O(1), as no extra space is used apart from the input strings.
