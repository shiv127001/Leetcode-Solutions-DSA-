class Solution {
public:
    int upto_k(vector<int>& nums, int k)
    {
        int l = 0, r = 0, n = nums.size(), cnt = 0;
        map<int, int> mpp;
        while (r < n)
        {
            mpp[nums[r]]++;
            while((int)mpp.size() > k)
            {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int upto_k_minus_1(vector<int>& nums, int k)
    {
        int l = 0, r = 0, n = nums.size(), cnt = 0;
        map<int, int> mpp;
        while (r < n)
        {
            mpp[nums[r]]++;
            while((int)mpp.size() > k)
            {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        int ans = upto_k(nums,k) - upto_k_minus_1(nums,k-1);
        return ans;

    }
};