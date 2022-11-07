#include<bits/stdc++.h>
int solve(vector<int> &choices, int num)
{
//     if(num == 0)
//         return 0;
//     if(num<0)
//         return INT_MIN;
    
//     int maxi = INT_MIN;
//     for(auto i: choices)
//     {
//         int ans = solve(choices, num - i);
//         if(ans!=INT_MIN)
//             maxi = max(maxi, ans+1);
//     }
//     return maxi;
    vector<int> dp(num+1, INT_MIN);
    dp[0] = 0;
    
    for(int i=1; i<num+1; i++)
    {
        for(auto j : choices)
        {
            if(i - j >= 0)
                dp[i] = max(dp[i], 1 + dp[i - j]);  
        }

    }
    if(dp[num]<0)
        return 0;
    return dp[num];
}
int cutSegments(int n, int x, int y, int z) {
	// Write your code here.
    vector<int> choices;
    choices.push_back(x);
    choices.push_back(y);
    choices.push_back(z);
    int ans = solve(choices, n);
    if(ans==INT_MIN)
        return 0;
    return ans;
}