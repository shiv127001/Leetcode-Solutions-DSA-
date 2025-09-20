class Solution {
public:
    int findLHS(vector<int>& nums) {
        int i,n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=1,cnt=0,maxlen=0;
        while(r<n)
        {
            int diff= nums[r]-nums[l];
            if(diff == 1) {
                cnt = r-l+1;
                r++;
            }
            else if(diff>1) l++;
            else r++;
            maxlen = max(cnt,maxlen);
        }
        return maxlen;
    }
};