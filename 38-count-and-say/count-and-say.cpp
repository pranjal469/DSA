class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";  // Step 1: If n is 1, just return "1"
        }

        // Step 2: Get the result for (n - 1)
        string say = countAndSay(n - 1);

        string result = "";  // Step 3: We'll build the result here

        // Step 4: Loop through the 'say' string
        for (int i = 0; i < say.length(); i++) {
            char ch = say[i];  // The current digit we are looking at
            int count = 1;     // Start counting this digit

            // Step 5: Count how many times this digit repeats
            while (i + 1 < say.length() && say[i + 1] == ch) {
                count++;
                i++;  // Move to the next character
            }

            // Step 6: Add the count and digit to the result string
            result += to_string(count) + ch;
        }

        // Step 7: Return the final result string
        return result;
    }
};
