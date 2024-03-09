# Binary String Iteration

Given a binary string `s`, perform `r` iterations on string `s`, where in each iteration 0 becomes 01 and 1 becomes 10. Find the nth character (considering 0-based indexing) of the string after performing these `r` iterations.

## Example

### Input

s = "1100"
r = 2
n = 3

shell
Copy code

### Output

1

c
Copy code

### Explanation

After 1st iteration, `s` becomes "10100101". After 2nd iteration, `s` becomes "1001100101100110". Now, we can clearly see that the character at 3rd index is 1, and so the output.

## Usage

```cpp
#include <iostream>
#include <string>
using namespace std;

char nthCharacter(string s, int r, int n) {
    // Implementation of the nthCharacter function
    // ...
}

int main() {
    string s = "1100";
    int r = 2;
    int n = 3;
    
    char result = nthCharacter(s, r, n);
    cout << "The nth character after performing iterations is: " << result << endl;
    
    return 0;
}
Complexity Analysis
Time Complexity: O(r * |s|), where |s| is the length of the input string s.
Space Complexity: O(|s|).
Constraints
1 ≤ |s| ≤ 10^3
1 ≤ r ≤ 20
0 ≤ n < |s|
