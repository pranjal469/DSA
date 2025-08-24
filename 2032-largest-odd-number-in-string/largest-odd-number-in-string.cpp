class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse from the end
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                // Found an odd digit, return substring
                return num.substr(0, i + 1);
            }
        }
        // No odd digit found
        return "";
    }
};
