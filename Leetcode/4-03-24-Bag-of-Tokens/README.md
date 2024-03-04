# Maximize Score After Playing Tokens

You start with an initial power of `power`, an initial score of 0, and a bag of tokens given as an integer array `tokens`, where each `tokens[i]` denotes the value of the i-th token.

Your goal is to maximize the total score by strategically playing these tokens. In one move, you can play an unplayed token in one of the two ways (but not both for the same token):

- Face-up: If your current power is at least `tokens[i]`, you may play tokeni, losing `tokens[i]` power and gaining 1 score.
- Face-down: If your current score is at least 1, you may play tokeni, gaining `tokens[i]` power and losing 1 score.

Return the maximum possible score you can achieve after playing any number of tokens.

## Example

### Input
tokens = [200, 100]
power = 150

shell
Copy code

### Output
1

vbnet
Copy code

Explanation: Play token1 (100) face-up, reducing your power to 50 and increasing your score to 1. There is no need to play token0, since you cannot play it face-up to add to your score. The maximum score achievable is 1.

## Constraints

- 0 <= tokens.length <= 1000
- 0 <= tokens[i], power < 10^4
