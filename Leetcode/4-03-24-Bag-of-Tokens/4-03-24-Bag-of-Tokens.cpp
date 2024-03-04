class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(), tokens.end());

        int score = 0;
        int index = tokens.size();

        for (int i = 0; i < index; i++) {

            if (power < tokens[i] && score > 0 && i != index - 1) {
                power += tokens[index - 1];
                index--;
                score--;
            }
            if (power >= tokens[i]) {
                score++;
                power -= tokens[i];
            }
        }

        return score;
    }
};
