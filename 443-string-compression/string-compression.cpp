class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int ind = 0; // index to write compressed result
        int i = 0;   // read pointer
        
        while (i < n) {
            char currentChar = chars[i];
            int count = 0;
            
            // Count the occurrences of currentChar
            while (i < n && chars[i] == currentChar) {
                i++;
                count++;
            }
            
            // Write the character
            chars[ind++] = currentChar;
            
            // Write the count if more than 1
            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) {
                    chars[ind++] = c;
                }
            }
        }
        
        return ind; // new length
    }
};
