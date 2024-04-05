class Solution {
public:
    string makeGood(string s) {
       string str = "";
       if (!s.empty()) {
           str += s[0]; // Append the first character
       }
       for (int i = 1; i < s.length(); i++) {
            char ch = s[i];
            if(!str.empty() && (ch == str.back() + 32 || ch == str.back() - 32)){
                str.pop_back(); // Remove the last character from str
            }
            else {
                str.push_back(ch); // Append the current character to str
            }
        }
        return str;
    }
};
