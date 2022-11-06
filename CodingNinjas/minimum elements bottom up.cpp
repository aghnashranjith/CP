#include <bits/stdc++.h> 
int solve(vector<int> &num, int x)
{
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;
    
    for(int i=1; i<=x; i++)
    {
        for(auto j : num)
        {
            if(i-j>=0 && dp[i-j]!=INT_MAX)
            {
                dp[i] = min(dp[i], 1+dp[i-j]);
            }
        }
    }
    
    if(dp[x]==INT_MAX)
        return -1;
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
//     cout<<endl<<x;
//     vector<int> dp(x+1, -1);
//     int ans = solve(num, x, dp);
//     if(ans == INT_MAX)
//         return -1;
//     return ans;
    return solve(num, x);
}