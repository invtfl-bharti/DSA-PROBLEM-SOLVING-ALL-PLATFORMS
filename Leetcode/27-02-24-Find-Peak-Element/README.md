# Peak Element in Array

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

## Example

**Input:** nums = [1,2,3,1]  
**Output:** 2  
**Explanation:** 3 is a peak element and your function should return the index number 2.

**Input:** nums = [1,2,1,3,5,6,4]  
**Output:** 5  
**Explanation:** Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.

## Algorithm

To find the peak element efficiently, we use a binary search approach. We compare the middle element with its neighbors and move towards the side where a peak is guaranteed to exist. This ensures O(log n) time complexity.
