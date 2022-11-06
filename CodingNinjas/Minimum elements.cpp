#include <bits/stdc++.h> 
int solve(vector<int> &num, int x, vector<int> &dp)
{
    if(x<0)
        return INT_MAX;
    if(x==0)
        return 0;
    
    if(dp[x]!=-1)
        return dp[x];
    
    int mini = INT_MAX;
    for(auto i : num)
    {
        int ans = solve(num, x-i, dp);
        if(ans!=INT_MAX)
            mini = min(mini, ans+1);
    }
    return dp[x] = mini;
}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
//     cout<<endl<<x;
    vector<int> dp(x+1, -1);
    int ans = solve(num, x, dp);
    if(ans == INT_MAX)
        return -1;
    return ans;
}