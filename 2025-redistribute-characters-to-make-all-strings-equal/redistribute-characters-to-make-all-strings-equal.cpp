class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        vector<int> freq(26, 0);
        
        // Count all characters
        for (auto &w : words) {
            for (char c : w) {
                freq[c - 'a']++;
            }
        }
        
        // Each char count must be divisible by n
        for (int count : freq) {
            if (count % n != 0) return false;
        }
        
        return true;
    }
};
