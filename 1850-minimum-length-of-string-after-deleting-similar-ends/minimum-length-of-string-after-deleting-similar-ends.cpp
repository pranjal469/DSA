class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j && s[i] == s[j]) {
            char curr = s[i];

            while (i <= j && s[i] == curr) {
                i++;
            }
            while (i <= j && s[j] == curr) {
                j--;
            }
        }

        return max(0, j - i + 1); // max for safety if fully deleted
    }
};
