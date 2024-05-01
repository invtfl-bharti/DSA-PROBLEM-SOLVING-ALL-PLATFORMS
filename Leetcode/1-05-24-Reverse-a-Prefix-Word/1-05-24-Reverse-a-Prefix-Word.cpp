class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left = 0;
        for(int right=0;right<word.length();right++) {
            if(word[right]==ch) {
                while(left<=right) {
                    swap(word[left],word[right]);
                    left++;
                    right--;
                }
                break;
            }
        }
        return word;
    }
};
