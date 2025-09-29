class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=0,n=nums.size(),minval=INT_MAX;
        int sub;
        // for(int i=0;i+k-1<n;++i)
        // {
        //     int diff = nums[i+k-1]-nums[i];
        //     minval = min(minval,diff);
        // }

        while(r<n)
        {
            if(r-l+1>k) l++;
            if(r-l+1 == k)
            {
                int max1 = nums[r];
                int min1 = nums[l];
                sub = max1-min1;
                minval = min(minval,sub);
            }
            
            r++;
        }
        return minval;
    }
};