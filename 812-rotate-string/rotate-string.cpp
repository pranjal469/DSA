class Solution {
public:
    bool rotateString(string s, string goal) {
        // Length check
        if(s.size() != goal.size()) return false;

        // s + s banake check karo
        string doubled = s + s;
        return (doubled.find(goal) != string::npos);
    }
};
