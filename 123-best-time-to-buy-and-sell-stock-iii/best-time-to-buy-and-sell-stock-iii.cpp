class Solution {
public:
    int bs(int i,int buy,vector<int> &arr, int n, vector<vector<vector<int>>>& dp,int flag)
    {
        if(i==n || flag ==0) return 0;
        if(dp[i][buy][flag]!=-1) return dp[i][buy][flag];
        int n_take,take;
        if(buy==0)
        {
            n_take = 0+bs(i+1,0,arr,n,dp,flag);
            take = -arr[i]+bs(i+1,1,arr,n,dp,flag);
        }
        if(buy==1)
        {
            n_take = 0+bs(i+1,1,arr,n,dp,flag);
            take = arr[i]+bs(i+1,0,arr,n,dp,flag-1);
        }
        return dp[i][buy][flag] = max(n_take,take);
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int flag = 2;
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return bs(0,0,prices,n,dp,flag);
    }
};