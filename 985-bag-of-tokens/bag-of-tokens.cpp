class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());  // Sort tokens to use smallest/largest smartly

        int i = 0, j = tokens.size() - 1;
        int score = 0, maxScore = 0;

        while (i <= j) {
            if (power >= tokens[i]) {
                // ✅ Play face-up: spend power to gain score
                power -= tokens[i];
                i++;
                score++;
                maxScore = max(maxScore, score);
            } else if (score > 0) {
                // ✅ Play face-down: spend score to gain power
                power += tokens[j];
                j--;
                score--;
            } else {
                // ❌ No more valid moves
                break;
            }
        }

        return maxScore;
    }
};
