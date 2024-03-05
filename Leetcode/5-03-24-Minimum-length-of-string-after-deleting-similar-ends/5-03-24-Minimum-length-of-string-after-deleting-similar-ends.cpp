#include <string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int prefix = 0;
        int suffix = s.length()-1;
        
        // Edge case: If the string has only one character,
        // return 1 as it's the minimum length possible.
        if (prefix == suffix) {
            return 1;
        }
        
        // Check for common characters between prefix and suffix.
        while (prefix < suffix && s[prefix] == s[suffix]) {
            char ch = s[prefix];
            
            // Removing common characters from the beginning.
            while (prefix <= suffix && s[prefix] == ch) {
                prefix++;
            }
            
            // Removing common characters from the end.
            while (prefix <= suffix && s[suffix] == ch) {
                suffix--;
            }
        }
        
        // Return the remaining length of the string.
        return (suffix - prefix + 1);
    }
};
