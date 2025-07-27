class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n;++i)
        {
            sum = 0;
            for(int j=i;j<n;++j)
            {
            sum = sum+nums[j];
            //int a = nums[i]
            if(sum == k)
            {
                count += 1;
                // sum = 0;
            }
            // if (sum>k)
            // {
            //     sum = 0;
            // }
            }
        }
        return count;
        
    }
};