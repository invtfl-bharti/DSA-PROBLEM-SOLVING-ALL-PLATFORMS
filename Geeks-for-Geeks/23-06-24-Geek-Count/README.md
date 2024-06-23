You are given a string s of lowercase letters. You have to count how many times "geek" is present
in string s as a subsequence.
Note: The answer can be large so return the ans modulo 10° + 7
Example 1:
Input:
s = geeks
Output:
1
Explanation:
In the string "geeks", "geek" appears as a subsequence exactly once. The characters
at indices 0, 1, 2, and 3 form "geek".
Example 2:
Input:
s = geeksforgeeks
Output:
8
Explanation:
In the string "geeksforgeeks", there are 8 different ways to form "geek" as a
subsequence. These ways correspond to picking characters from the following sets of
indices:
