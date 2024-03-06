# Problem Statement

Given two strings, one is a text string and the other is a pattern string. The task is to print the indexes of all the occurrences of the pattern string in the text string. For printing, the starting index of a string should be taken as 1. The strings will only contain lowercase English alphabets ('a' to 'z').

## Example 1:

**Input:**  
text = "birthdayboy"  
pattern = "birth"  

**Output:**  
[1]  

**Explanation:**  
The string "birth" occurs at index 1 in text.

## Example 2:

**Input:**  
text = "geeksforgeeks"  
pattern = "geek"  

**Output:**  
[1, 9]  

**Explanation:**  
The string "geek" occurs twice in text, one starts at index 1 and the other at index 9.

## Constraints:
- 1 <= |text| <= 5*10^5
- 1 <= |pattern| <= |text|

## Your Task
You are required to complete the function `search()` which takes the string `text` and the string `pattern` as input and returns an array denoting the start indices (1-based) of substring pattern in the string text. 

**Expected Time Complexity:** O(|text| + |pattern|).  
**Expected Auxiliary Space:** O(1).

## Repository Structure
- **README.md:** Provides problem statement, input-output examples, and task description.
- **solution.cpp:** Contains the C++ implementation of the `search()` function.
- **solution.py:** Contains the Python implementation of the `search()` function.
- **solution.java:** Contains the Java implementation of the `search()` function.
