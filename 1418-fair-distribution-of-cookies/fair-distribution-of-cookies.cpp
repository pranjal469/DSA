class Solution {
public:
    void solve(int idx, vector<int>& cookies, vector<int>& children, int k, int& result) {
        int n = cookies.size();
        if (idx >= n) {
            int unfairness = *max_element(begin(children), end(children));
            result = min(result, unfairness);
            return;
        }
        
        // Fixed: Loop k times (number of children), not n times
        for (int i = 0; i < k; i++) {
            children[i] += cookies[idx];              // Give cookie to child i
            solve(idx + 1, cookies, children, k, result);
            children[i] -= cookies[idx];              // Fixed: Backtrack correctly
        }
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        int result = INT_MAX;  // Fixed: Local variable instead of global
        int n = cookies.size();
        vector<int> children(k, 0);
        solve(0, cookies, children, k, result);
        return result;
    }
};