class Solution {
public:
    string removeOccurrences(string s, string part) {
      // Loop through the string till it reaches to a find when the part string is no longer found in string s
        while(s.find(part)!=string::npos) {
          // erase the string part 
            s.erase(s.find(part),part.length());
        }
      // return the remaining characters of the string
        return s;
    }
};
