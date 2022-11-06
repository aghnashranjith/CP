class Solution {
public:
    int minCost(int step, vector<int> &dp, vector<int>& cost)
    {
        if(step == 0)
            return cost[0];
        if(step == 1)
            return cost[1];
        
        if(dp[step]!=-1)
            return dp[step];
        return dp[step] = min(minCost(step -1 , dp, cost), minCost(step-2, dp, cost)) + cost[step];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        //step 1
        vector<int> dp(n+1, -1);
        return min(minCost(n-1, dp, cost), minCost(n-2, dp, cost));
    }
};