#include <bits/stdc++.h>
long long int solve(vector<int> &nums)
{
    long long int prev1 = 0;
    long long int prev2 = nums[0];
    
    for(int i=1;i<nums.size(); i++)
    {
        long long int incl = prev1 + nums[i];
        long long int excl = prev2 + 0;
        long long int curr = max(incl, excl);
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n = valueInHouse.size();
    if(n==1)
        return valueInHouse[0];
    vector<int> first;
    vector<int> last;
    for(int i=0; i<valueInHouse.size()-1; i++)
        first.push_back(valueInHouse[i]);
    for(int i=1; i<valueInHouse.size(); i++)
        last.push_back(valueInHouse[i]);
    
    return max(solve(first), solve(last));
}