#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        int i = 0;
        int l = 0, r = 0; // l and r will help reverse each word
        int n = s.length();

        while (i < n) {
            // Copy characters of the current word
            while (i < n && s[i] != ' ') {
                s[r++] = s[i++];
            }

            // If we found a word, reverse it
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' '; // add a space after the word
                r++;
                l = r; // move l to the new position
            }

            i++; // move past the space(s) in the original string
        }

        // Step 3: Remove the trailing space (if any)
        s = s.substr(0, r - 1);
        return s;
    }
};
