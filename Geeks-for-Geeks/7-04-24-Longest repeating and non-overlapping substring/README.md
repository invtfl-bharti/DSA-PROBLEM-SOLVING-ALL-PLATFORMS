# Problem Statement

Given a string `s` of length `n`, find the longest repeating non-overlapping substring in it. In other words, find 2 identical substrings of maximum length which do not overlap. Return the longest non-overlapping substring. Return "-1" if no such string exists.

Note: Multiple Answers are possible but you have to return the substring whose first occurrence is earlier.

For Example: "abhihiab", here both "ab" and "hi" are possible answers. But you will have to return "ab" because its first occurrence appears before the first occurrence of "hi".

## Example 1:

**Input:**  
n = 9  
s = "acdcdacdc"  

**Output:**  
"acdc"  

**Explanation:**  
The string "acdc" is the longest Substring of s which is repeating but not overlapping.

## Example 2:

**Input:**  
n = 7  
s = "heheheh"  

**Output:**  
"heh"  

**Explanation:**  
The string "heh" is the longest Substring of s which is repeating but not overlapping.

## Constraints:

- 1 <= n <= 10^3

## Your Task
You don't need to read input or print anything. Your task is to complete the function `longestSubstring()` which takes an Integer `n` and a string `s` as input and returns the answer.

**Expected Time Complexity:** O(n^2)  
**Expected Auxiliary Space:** O(n^2)

## Repository Structure
- **README.md:** Provides problem statement, input-output examples, and task description.
- **solution.cpp:** Contains the C++ implementation of the `longestSubstring()` function.
- **solution.py:** Contains the Python implementation of the `longestSubstring()` function.
- **solution.java:** Contains the Java implementation of the `longestSubstring()` function.
