class Solution {
public:
    int numberOfSubarraysuptok(vector<int>& nums, int k)
    {
        int l=0,r=0,n=nums.size(),cnt=0,maxlen=0;
        int sum=0,odds=0;
        while(r<n)
        {
            if (nums[r] % 2) odds++;
            while(odds>k){
                if (nums[l] % 2) odds--;
                l++;
            }
            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if(nums[i]%2==0)
                nums[i] = 0;
        }
        int ans = numberOfSubarraysuptok(nums,k)-numberOfSubarraysuptok(nums,k-1);
        return ans;
    }
};