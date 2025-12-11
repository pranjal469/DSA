class Solution {
public:
    int solve(vector<int>& satisfaction,int i,int time, vector<vector<int>> &dp){
        if(i==satisfaction.size()){
            return 0;
        }
         if (dp[i][time] != -1)
            return dp[i][time];

       int take = time*satisfaction[i]+solve(satisfaction,i+1,time+1,dp);
        int skip =solve(satisfaction,i+1,time,dp);
        return dp[i][time]= max (take,skip);
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        int time = 1;
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
     sort(satisfaction.begin(),satisfaction.end());   
     return solve(satisfaction,0,time,dp);
    }
};