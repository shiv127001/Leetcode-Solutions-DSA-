class Solution {
public:
    // // // METHOD 2 : TABULATION
    // int change(int amount, vector<int>& coins)
    // {

    // }




    // METHOD 1 : MEMOIZATION 
    int f(vector<int>&coins,int n,int target,vector<vector<int>>&dp,int index){
        if(index == 0)
        {
            if(target % coins[index] ==0) return 1;
            else return 0;
        }
        if(dp[index][target]!=-1) return dp[index][target];
        int n_pick = f(coins,n,target,dp,index-1);
        int pick = 0;
        if(coins[index]<=target) pick = f(coins,n,target-coins[index],dp,index);
        return dp[index][target] = pick+n_pick;
    }

    int change(int amount, vector<int>& coins) {
        int N = coins.size();
        vector<vector<int>> dp(N,vector<int>(amount+1,-1));
        return f(coins,N,amount,dp,N-1);
    }


};