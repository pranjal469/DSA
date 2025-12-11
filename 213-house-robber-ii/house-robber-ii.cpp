class Solution {
public:
    int solve(vector<int>& nums, int i, int end, vector<int>& dp) {
        // Base case
        if (i > end) return 0;

        // Memo check
        if (dp[i] != -1) return dp[i];

        // Choose take
        int take = nums[i] + solve(nums, i + 2, end, dp);

        // Choose skip
        int skip = solve(nums, i + 1, end, dp);

        return dp[i] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        // Case 1: rob from index 1 to n-1
        vector<int> dp1(n, -1);
        int ans1 = solve(nums, 1, n - 1, dp1);

        // Case 2: rob from index 0 to n-2
        vector<int> dp2(n, -1);
        int ans2 = solve(nums, 0, n - 2, dp2);

        return max(ans1, ans2);
    }
};
