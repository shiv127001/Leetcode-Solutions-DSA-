class Solution {
public:
    int bs(int i,int buy,vector<int> &arr, int n, vector<vector<int>>& dp)
    {
        if(i==n) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        int n_take,take;
        if(buy==0)
        {
            n_take = 0+bs(i+1,0,arr,n,dp);
            take = -arr[i]+bs(i+1,1,arr,n,dp);
        }
        if(buy==1)
        {
            n_take = 0+bs(i+1,1,arr,n,dp);
            take = arr[i]+bs(i+1,0,arr,n,dp);
        }
        return dp[i][buy] = max(n_take,take);
    }


    int maxProfit(vector<int>& prices) {
        int buy = 0,n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return bs(0,buy,prices,n,dp);
    }
};