class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        while (i < word.size() && word[i] != ch) {
            i++;
        }
        if (i == word.size()) return word;  // ch not found

        // reverse from 0 to i
        int l = 0, r = i;
        while (l < r) {
            swap(word[l], word[r]);
            l++;
            r--;
        }
        return word;
    }
};
