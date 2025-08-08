class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if (m == 0) return 0;  // Edge case: empty needle

        for (int i = 0; i <= n - m; i++) {
            string sub = haystack.substr(i, m);
            if (sub == needle) {
                return i;
            }
        }
        return -1;
    }
};

