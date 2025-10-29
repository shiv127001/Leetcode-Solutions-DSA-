class Solution {
public:
    int bs(int i,int buy,vector<int> arr, int n,int k, vector<vector<vector<int>>>& dp)
    {
        if(i==n || k==0) return 0;
        if(dp[i][buy][k]!=-1) return dp[i][buy][k];
        int n_take,take;
        if(buy==0)
        {
            n_take = 0+bs(i+1,0,arr,n,k,dp);
            take = -arr[i]+bs(i+1,1,arr,n,k,dp);
        }
        if(buy==1)
        {
            n_take = 0+bs(i+1,1,arr,n,k,dp);
            take = arr[i]+bs(i+1,0,arr,n,k-1,dp);
        }
        return dp[i][buy][k] = max(n_take,take);
    }
    int maxProfit(int k, vector<int>& prices) {
        int buy = 0,n = prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return bs(0,buy,prices,n,k,dp);
    }
};