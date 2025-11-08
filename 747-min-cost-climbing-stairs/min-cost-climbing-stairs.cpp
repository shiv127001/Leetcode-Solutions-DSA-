class Solution {
public:
    int func(vector<int>& cost, int index,int n,vector<int>& dp)
    {
        if(index == n-1) return cost[index];
        if(index == n) return 0;
        if(dp[index] !=-1) return dp[index];
        int a,b;
        a = cost[index] + func(cost,index+1,n,dp);
        b = cost[index] + func(cost,index+2,n,dp);
        return dp[index] = min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp1(n,-1);
        vector<int> dp2(n-1,-1);
        return min(func(cost,0,n,dp1),func(cost,1,n,dp2));

        
    }
};