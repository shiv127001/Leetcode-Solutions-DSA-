class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0, r=0, n=nums.size();
        double maxavg = -1e9, avgsubarray, sum=0;
        for(int i=0;i<k;++i)
            sum+=nums[i];
        maxavg = sum/k;
        for(int i=k;i<n;++i)
        {
            sum = sum+nums[i]-nums[i-k];
            maxavg = max(maxavg,sum/k);
        }
        return maxavg;
    }
};
