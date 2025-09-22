class Solution {
public:
    int rec_climbStairs(int n, vector<int>& dp,int cnt)
    {
        if(n==0) return ++cnt;
        else if(n==1) return ++cnt;
        if(dp[n]!=-1) return dp[n] ;
        return dp[n] = rec_climbStairs(n-1,dp,cnt)+rec_climbStairs(n-2,dp,cnt);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int cnt=0;
        return rec_climbStairs(n,dp,cnt);
    }
};