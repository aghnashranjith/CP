class Solution {
public:
    int solve(int n, int step, vector<int> &dp)
    {
        if(step == n)
            return 1;
        if(step > n)
            return 0;
        
        if(dp[step] != -1)
            return dp[step];
        
        return dp[step] = solve(n, step + 1, dp) + solve(n, step + 2, dp);
    }
    
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, 0, dp);
    }
};