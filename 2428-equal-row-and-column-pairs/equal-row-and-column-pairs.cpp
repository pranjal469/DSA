class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        // Step 1: store rows in map
        map<vector<int>, int> rowMap;
        for (int i = 0; i < n; i++) {
            rowMap[grid[i]]++;  // row vector as key
        }

        // Step 2: check columns
        for (int j = 0; j < n; j++) {
            vector<int> col;
            for (int i = 0; i < n; i++) {
                col.push_back(grid[i][j]);
            }
            if (rowMap.find(col) != rowMap.end()) {
                count += rowMap[col]; // add frequency
            }
        }

        return count;
    }
};
