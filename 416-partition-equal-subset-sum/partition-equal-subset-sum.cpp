class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int sum=0,target = 0,n=arr.size();
        for(int i=0;i<n;++i) sum+=arr[i];
        if(sum%2!=0) return false;
        else target = sum/2;
        vector<vector<bool>> dp(n,vector<bool>(target+1,false));
        for(int i=0;i<n;++i) dp[i][0] = true;
        if(arr[0]<=target) dp[0][arr[0]] = true;

        for(int i=1;i<n;++i)
        {
            for(int j=1;j<=target;++j)            
            {
                bool n_pick = dp[i-1][j];
                bool pick = false;
                if(arr[i]<=j) pick = dp[i-1][j-arr[i]];
                dp[i][j] = n_pick||pick;
            }
        }
        return dp[n-1][target];
    }
};