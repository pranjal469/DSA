class Solution {
public:
    int dp[2501][2501]; 
        
    int solve(vector<int>& nums, int prev, int idx) {
        if (idx == nums.size()) 
            return 0;

        if (dp[prev+1][idx] != -1)
            return dp[prev+1][idx];

        // skip current element
        int skip = solve(nums, prev, idx + 1);

        // take current element (only if increasing)
        int take = 0;
        if (prev == -1 || nums[idx] > nums[prev]) {
            take = 1 + solve(nums, idx, idx + 1);
        }

        return dp[prev+1][idx] = max(take, skip);
    }

    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(nums, -1, 0);
    }
};
