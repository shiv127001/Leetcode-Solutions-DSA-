class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0,l=0,len=0,r=0,n=nums.size();int zeros=0;
        while(r<n)
        {
            if(nums[r] ==0) zeros ++;
            while(zeros>k)
            {
                if(nums[l] ==0) zeros--;
                l++;
            }
                if(zeros<=k) 
                {
                    len = r-l+1;
                    maxlen = max(len,maxlen);
                }
            r++;
        }
        return maxlen;
    }
};