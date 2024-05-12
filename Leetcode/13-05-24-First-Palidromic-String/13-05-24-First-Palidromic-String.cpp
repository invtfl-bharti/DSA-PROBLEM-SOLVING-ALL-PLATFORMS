class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        
        for(int i = 0;i < words.size(); i++) {

            int leftIndex = 0;
            int rightIndex = words[i].length()-1;

            while (leftIndex >= 0 && rightIndex < words[i].length()){
                if (words[i][leftIndex] == words[i][rightIndex]){
                    leftIndex++;
                    rightIndex--;
                }
                else {
                    break;
                }

                if (leftIndex >= rightIndex){
                    return words[i];
                }
            }
        }
        return "";
    }
};
