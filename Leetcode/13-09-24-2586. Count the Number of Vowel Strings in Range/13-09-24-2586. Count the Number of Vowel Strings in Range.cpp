class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i = left; i <= right; i++) {
            string word = words[i];
            if(isVowel(word[0]) && isVowel(word[word.size() - 1])) {
                count++;
            }

        }
        return count;
    }
};
