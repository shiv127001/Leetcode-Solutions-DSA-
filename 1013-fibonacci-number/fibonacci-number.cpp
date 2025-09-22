class Solution {
public:
    int fib_DP_memoization(int n,vector<int>& dp)
    {
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n] = fib_DP_memoization(n-1,dp)+fib_DP_memoization(n-2,dp);
        return dp[n];

    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return fib_DP_memoization(n,dp);
    }
};