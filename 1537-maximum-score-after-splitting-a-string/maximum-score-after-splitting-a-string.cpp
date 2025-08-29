class Solution {
public:
    int maxScore(string s) {
        int n = s.size();

        // Count total 1s in string (for right side initially)
        int totalOnes = 0;
        for (char c : s) {
            if (c == '1') totalOnes++;
        }

        int leftZeros = 0;
        int rightOnes = totalOnes;
        int maxScore = INT_MIN;

        // Split before the last character (so right side is non-empty)
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0') leftZeros++;
            else rightOnes--;  // If it's '1', it leaves the right side

            int currentScore = leftZeros + rightOnes;
            maxScore = max(maxScore, currentScore);
        }

        return maxScore;
    }
};
