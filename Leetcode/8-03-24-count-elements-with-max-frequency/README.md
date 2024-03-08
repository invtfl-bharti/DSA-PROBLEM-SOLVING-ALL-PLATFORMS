# Maximum Frequency Count

This repository contains a C++ function to calculate the total frequencies of elements in an array such that those elements all have the maximum frequency.

## Problem Statement

Given an array `nums` consisting of positive integers, return the total frequencies of elements in `nums` such that those elements all have the maximum frequency.

### Examples:

#### Example 1:

Input:  
nums = [1,2,2,3,1,4]  
Output:  
4  
Explanation:  
The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.  
So the number of elements in the array with maximum frequency is 4.

#### Example 2:

Input:  
nums = [1,2,3,4,5]  
Output:  
5  
Explanation:  
All elements of the array have a frequency of 1 which is the maximum.  
So the number of elements in the array with maximum frequency is 5.

## Approach

We approach this problem by counting the frequency of each element in the array using a hashmap. Then, we find the maximum frequency among all elements. Finally, we iterate through the hashmap and count the elements with frequencies equal to the maximum frequency.

### Time Complexity

The time complexity of the solution is O(n), where n is the length of the input array `nums`.

### Space Complexity

The space complexity of the solution is O(n) as we use a hashmap to store the frequency of each element in the array.

## Usage

To use the function, simply call `maxFrequencyCount()` function and pass the array `nums` as the argument.

```cpp
#include <iostream>
#include <vector>

using namespace std;

// Function declaration
int maxFrequencyCount(vector<int>& nums);

int main() {
    vector<int> nums1 = {1, 2, 2, 3, 1, 4};
    vector<int> nums2 = {1, 2, 3, 4, 5};
    
    // Example usage
    cout << maxFrequencyCount(nums1) << endl; // Output: 4
    cout << maxFrequencyCount(nums2) << endl; // Output: 5

    return 0;
}
