class Solution {
public:
    string makeGood(string s) {
        string result = "";
        
        for (int i = 0; i < s.length(); i++) {
            // If result is not empty and the last character in result
            // forms a "bad pair" with current character
            if (!result.empty() && 
                (result.back() + 32 == s[i] || result.back() - 32 == s[i])) {
                result.pop_back();  // Remove the bad pair
            } else {
                result.push_back(s[i]);  // Add current character
            }
        }
        
        return result;
    }
};