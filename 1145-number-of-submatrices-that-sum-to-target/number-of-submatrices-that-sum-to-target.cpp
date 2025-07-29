class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Step 1: Row-wise prefix sum
        for (int row = 0; row < rows; row++) {
            for (int col = 1; col < cols; col++) {
                matrix[row][col] += matrix[row][col - 1];
            }
        }

        int result = 0;

        // Step 2: Iterate over all column pairs (startcol to endcol)
        for (int startcol = 0; startcol < cols; startcol++) {
            for (int endcol = startcol; endcol < cols; endcol++) {
                unordered_map<int, int> mp;
                mp[0] = 1; // For submatrices that exactly match target from row 0
                int cumsum = 0;

                // Step 3: Treat each row sum between startcol and endcol as a 1D array
                for (int row = 0; row < rows; row++) {
                    int rowSum = matrix[row][endcol];
                    if (startcol > 0) {
                        rowSum -= matrix[row][startcol - 1];
                    }
                    cumsum += rowSum;

                    // Step 4: Check if (cumsum - target) has occurred before
                    if (mp.find(cumsum - target) != mp.end()) {
                        result += mp[cumsum - target];
                    }

                    // Step 5: Record current cumulative sum
                    mp[cumsum]++;
                }
            }
        }

        return result;
    }
};
