# Frequency Balance Check

This repository contains a C++ function to check if it's possible to remove at most one character from a given string such that the frequency of each distinct character becomes the same.

## Problem Statement

Given a string `s` which contains only lower alphabetic characters, check if it is possible to remove at most one character from this string in such a way that the frequency of each distinct character becomes the same in the string. Return true if it is possible to do else return false.

### Examples:

#### Example 1:

Input:  
s = "xyyz"  
Output:  
1  
Explanation:  
Removing one 'y' will make the frequency of each character to be 1.

#### Example 2:

Input:  
s = "xxxxyyzz"  
Output:  
0  
Explanation:  
Frequency cannot be made the same by removing at most one character.

## Approach

We approach this problem by counting the frequency of each character in the string using a hashmap. Then, we check if it's possible to make the frequencies of all characters equal by removing at most one character. We consider the cases where there is only one distinct frequency, two distinct frequencies with a difference of 1 between them, or one frequency equals 1 and the other frequency equals one more than the first one.

### Time Complexity

The time complexity of the solution is O(|s|), where |s| is the length of the input string.

### Space Complexity

The space complexity of the solution is O(1) as it uses only a fixed amount of extra space irrespective of the input size.

## Usage

To use the function, simply call `sameFreq()` function and pass the string `s` as the argument.

```cpp
#include <iostream>
#include <string>

using namespace std;

// Function declaration
bool sameFreq(string s);

int main() {
    string s1 = "xyyz";
    string s2 = "xxxxyyzz";
    
    // Example usage
    cout << sameFreq(s1) << endl; // Output: 1
    cout << sameFreq(s2) << endl; // Output: 0

    return 0;
}
