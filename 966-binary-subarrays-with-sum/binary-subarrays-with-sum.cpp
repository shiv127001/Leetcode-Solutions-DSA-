class Solution {
public:

    int lessthangoal(vector<int>& nums, int goal)
    {   if(goal<0) return 0;
        int l=0,r=0,sum=0,n=nums.size(),cnt = 0;
        while(r<n)
        {   sum+=nums[r];
            while(sum>goal)
            {   sum=sum-nums[l];
                l++;
            }
            cnt = cnt+r-l+1;
            r++;
        }
        return cnt;
    }
    int lessthangoalminus1(vector<int>& nums, int goal)
    {   if(goal<0) return 0;
        int l=0,r=0,sum=0,n=nums.size(),cnt = 0;
        while(r<n)
        {   sum+=nums[r];
            while(sum>goal)
            {   sum=sum-nums[l];
                l++;
            }
            cnt = cnt+r-l+1;
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt1 = lessthangoal(nums,goal);
        int cnt2 = lessthangoalminus1(nums,goal-1);
        int ans = cnt1-cnt2;
        return ans;
    }
};