class Solution {
public:

    // METHOD 1 : MEMOIZATION 
    int f(vector<int>&coins,int n,int target,vector<vector<int>>&dp,int index){
        if(index == 0)
        {
            if(target % coins[index] ==0) return target/coins[index];
            else return 1e9;
        }
        if(dp[index][target]!=-1) return dp[index][target];
        int n_pick = f(coins,n,target,dp,index-1);
        int pick = 1e9;
        if(coins[index]<=target) pick = 1+f(coins,n,target-coins[index],dp,index);
        return dp[index][target] = min(pick,n_pick);
    }
 
    int coinChange(vector<int>& coins, int amount) {
        int N = coins.size();
        vector<vector<int>> dp(N,vector<int>(amount+1,-1));
        int ans = f(coins,N,amount,dp,N-1);
        if (ans >= 1e9) return -1;
        return ans;
    }
};