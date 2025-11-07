class Solution {
public:
    int func(vector<int> &nums,int k,vector<int> &dp)
    {
        if(k == 0) return nums[0];
        if(k==-1) return 0;
        if(dp[k] != -1) return dp[k];
        int n_pick,pick=0;
        n_pick = func(nums,k-1,dp);
        pick = nums[k] + func(nums,k-2,dp);
        return dp[k] = max(n_pick,pick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp (n+1,-1);
        return func(nums,n-1,dp);



        // int i=0,n=nums.size();
        // int sum=0;
        // while(i<n)
        // {
        //     sum+=nums[i];
        //     i+=2;
        // }
        // i = 1;
        // int sum2 =0;
        // while(i<n)
        // {
        //     sum2+=nums[i];
        //     i+=2;
        // }
        // sum = max(sum,sum2);
        // return sum;
    }
};