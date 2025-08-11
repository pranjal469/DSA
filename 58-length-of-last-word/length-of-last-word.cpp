class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() == 1 && s[0] != ' ') {
            return 1;
        }

        string result;
        int i = s.length() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Collect last word
        while (i >= 0 && s[i] != ' ') {
            result += s[i];
            i--;
        }

        return result.length();
    }
};
