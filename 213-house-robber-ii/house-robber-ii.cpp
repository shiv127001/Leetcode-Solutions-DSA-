class Solution {
public:
    int func(vector<int> &nums,int k,vector<int> &dp)
    {
        if(k<0) return 0;
        if(k==0) return nums[0];
        if(dp[k]!=-1) return dp[k];
        int pick,n_pick;
        n_pick = func(nums,k-1,dp);
        pick = nums[k] +func(nums,k-2,dp);
        return dp[k] = max(pick,n_pick);

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        vector<int> a(nums.begin(), nums.end() - 1);  // exclude last
        vector<int> b(nums.begin() + 1, nums.end());  // exclude first
        
        vector<int> dp1(a.size(), -1);
        vector<int> dp2(b.size(), -1);

        int option1 = func(a, a.size() - 1, dp1);
        int option2 = func(b, b.size() - 1, dp2);

        return max(option1, option2);
    }
};