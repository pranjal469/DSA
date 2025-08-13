class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charFreq(26, 0); // frequency of chars in 'chars'
        for (char c : chars) {
            charFreq[c - 'a']++;
        }

        int totalLength = 0;

        for (string &word : words) {
            vector<int> wordFreq(26, 0);
            for (char c : word) {
                wordFreq[c - 'a']++;
            }

            bool canForm = true;
            for (int i = 0; i < 26; i++) {
                if (wordFreq[i] > charFreq[i]) {
                    canForm = false;
                    break;
                }
            }

            if (canForm) {
                totalLength += word.length();
            }
        }

        return totalLength;
    }
};
