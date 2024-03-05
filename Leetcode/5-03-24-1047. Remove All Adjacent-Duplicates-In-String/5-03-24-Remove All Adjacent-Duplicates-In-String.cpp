lass Solution {
public:
    string removeDuplicates(string s) {
        string str = "";
        int index = 0;
        while(index<s.length()) {
            if(str.length()>0 && str[str.length()-1]==s[index]) {
                   str.pop_back();
            }
            else{
                str.push_back(s[index]);
            }
            index++;
        }
        return str;

    }
};
