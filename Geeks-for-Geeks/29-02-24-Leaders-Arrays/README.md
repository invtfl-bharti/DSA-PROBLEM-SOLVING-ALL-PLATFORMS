 #Finding Leaders in an Array

Given an array A of positive integers, this task is to find the leaders in the array. An element of the array is considered a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

## Example:

### Input:
n = 6
A[] = {16, 17, 4, 3, 5, 2}

shell
Copy code

### Output:
17 5 2

csharp
Copy code

### Explanation:
- The first leader is 17 as it is greater than all the elements to its right.
- Similarly, the next leader is 5.
- The rightmost element is always a leader, so it is also included.
