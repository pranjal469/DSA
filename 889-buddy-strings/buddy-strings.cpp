class Solution {
public:
    bool checkfreq(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        // Check if any character occurs at least twice
        for (auto &p : freq) {
            if (p.second >= 2) return true;
        }
        return false;
    }

    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }

        if (s == goal) {
            // If strings are same, need at least one duplicate char
            return checkfreq(s);
        }

        vector<int> indices;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                indices.push_back(i);
            }
        }

        if (indices.size() != 2) {
            return false;
        }

        // Swap and check
        swap(s[indices[0]], s[indices[1]]);
        return s == goal;
    }
};
