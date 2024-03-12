# Delete Zero Sum Consecutive Nodes in Linked List

This repository contains a solution to the problem of deleting consecutive sequences of nodes in a linked list that sum to 0 until there are no such sequences left.

## Problem Statement

Given the head of a linked list, the task is to repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences left. After doing so, return the head of the final linked list. 

### Example

#### Input:
head = [1,2,-3,3,1]

shell
Copy code
#### Output:
[3,1]

csharp
Copy code
Note: The answer `[1,2,1]` would also be accepted.

## Approach

To solve this problem, we can use a hashmap to keep track of the running sum of nodes encountered so far. If a running sum repeats, it indicates that the sum of nodes between the two occurrences of the sum is zero. Therefore, we can remove these nodes from the linked list.

### Time Complexity

The time complexity of this solution is O(n), where n is the number of nodes in the linked list.

### Space Complexity

The space complexity is also O(n) due to the hashmap used to store the running sum and corresponding nodes.
