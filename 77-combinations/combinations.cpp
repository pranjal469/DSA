class Solution {
public:
    vector<vector<int>> result;

    void solve(int start, int n, int k, vector<int>& temp, int count) {
        if (count == k) {
            result.push_back(temp);
            return;
        }

        for (int i = start; i <= n; i++) {
            temp.push_back(i);
            solve(i + 1, n, k, temp, count + 1); // go to next number
            temp.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(1, n, k, temp, 0); // start from 1, count = 0
        return result;
    }
};
