# Intersection of Two Arrays

## Problem Description
Given two integer arrays `nums1` and `nums2`, return an array of their intersection. Each element in the result must be unique and 
you may return the result in any order.

## Examples

### Example 1:
Input: 
```plaintext
nums1 = [1,2,2,1], nums2 = [2,2]
Output:

plaintext
Copy code
[2]
Example 2:
Input:

plaintext
Copy code
nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output:

plaintext
Copy code
[9,4]
Explanation: [4,9] is also accepted.

Constraints
1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
Approach
To find the intersection of two arrays, we can use a set to store unique elements of one array and then iterate through the other array
to check if an element exists in the set. If it does, we add it to the result array. We'll make sure to handle uniqueness in the result array.
