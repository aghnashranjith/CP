#include <bits/stdc++.h> 
int solve(vector<int> &nums, int num)
{
    int n = nums.size();
    if(num == 0)
        return nums[0];
    if(num == 1)
        return max(nums[0], nums[1]);
    int maxi = INT_MIN;
    for(int i=num-2; i>=0; i--)
    {
         maxi = max(maxi, nums[num] + solve(nums, i));
    }
    return maxi;
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    return max(solve(nums, nums.size()),solve(nums, nums.size()-1));
}