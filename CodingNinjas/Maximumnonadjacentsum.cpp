#include <bits/stdc++.h> 
int solve(vector<int> &nums, int num, vector<int> &dp)
{
    if(num < 0)
        return 0;
    if(num == 0)
        return nums[0];
    
    if(dp[num] != -1)
        return dp[num];
    
    int incl = solve(nums, num - 2, dp) + nums[num];
    int excl = solve(nums, num - 1, dp) + 0;
    
    return dp[num] = max(incl, excl);
}
int solvetab(vector<int> &nums)
{
    vector<int> dp(nums.size()+1, 0);
    dp[0] = nums[0];
    for(int i= 1; i<nums.size(); i++)
    {
        int incl = nums[i] + dp[i-2];
        int excl = 0 + dp[i-1];
        dp[i] = max(incl, excl);
    }
    return dp[nums.size()-1];
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
//     vector<int> dp(nums.size() + 1, -1);
//     return solve(nums, nums.size(), dp);
    return solvetab(nums);
}