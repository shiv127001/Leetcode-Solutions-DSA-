class Solution {
public:
    // int fib_DP_memoization(int n,vector<int>& dp)
    // {
    //     if(n<=1) return n;
    //     if(dp[n]!=-1) return dp[n];
    //     dp[n] = fib_DP_memoization(n-1,dp)+fib_DP_memoization(n-2,dp);
    //     return dp[n];

    // }
    // int fib(int n) {
    //     vector<int> dp(n+1,-1);
    //     return fib_DP_memoization(n,dp);
    // }
    int fib(int n)
    {
        if(n==0) return 0;
        int prev=1,prev2=0;
        int cur;
        for(int i=2;i<=n;++i)
        {
            cur = prev+prev2;
            prev2 = prev;
            prev = cur;
        }
        return prev;

    }
};