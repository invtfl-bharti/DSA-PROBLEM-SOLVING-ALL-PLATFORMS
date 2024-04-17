class Solution {
public:
    void reverseString(vector<char>& s) {
        // Using two pointer approach start swapping the first and last elements and so on
       int i = 0;
       int j = s.size()-1;
       while(i<j){
        swap(s[i],s[j]);
        // increment i
        i++;
        // decrement j
        j--;
       }
 
    }
};
