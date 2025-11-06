class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<3) return nums[n-1];
        int cnt =0;
        for(int i=n-1;i>0; --i)
        {
            if(nums[i]>nums[i-1]) cnt++;
            if(cnt == 2) return nums[i-1];
        }
        if(cnt<2) return nums[n-1];
        return nums[n-3];
    }
};