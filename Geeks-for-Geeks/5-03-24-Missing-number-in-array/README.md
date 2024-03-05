5# Missing Number in Array

Given an array of size N-1 containing distinct integers in the range of 1 to N, this algorithm finds the missing element.

## Example

### Input

N = 5
A = [1, 2, 3, 5]

shell
Copy code

### Output

4

shell
Copy code

### Input

N = 10
A = [6, 1, 2, 8, 3, 4, 7, 10, 5]

shell
Copy code

### Output

9

python
Copy code

## Approach

1. Calculate the sum of the first N natural numbers using the formula `N * (N + 1) / 2`.
2. Calculate the sum of the elements in the given array.
3. Return the difference between the total sum and the array sum, which will be the missing number.

## Time Complexity

The time complexity of this algorithm is O(N), where N is the size of the input array.

## Space Complexity

The space complexity is O(1) as the algorithm uses only a constant amount of extra space.
