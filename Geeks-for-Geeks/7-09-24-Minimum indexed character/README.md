Given a string S and another string patt. Find the character in patt that is present at the minimum index in S.
 

Example 1:

Input: S = "zsyle", patt = "bjz"
Output: "z"
Example 2:

Input: S = "anskg", patt = "me"
Output: "$"
 

Your Task:
You don't need to read or print anything. Your task is to complete the function printMinIndexChar() which takes S and patt as input parameter and returns the character in patt that is present at the minimum index in S. If not possible returns "$".
 

Expected Time Complexity: O(max(|str|, |patt|))
Expected Auxilary Space: O(K) where K <= 26
 

Constraints:
1 ≤ |S|, |patt| ≤ 104

