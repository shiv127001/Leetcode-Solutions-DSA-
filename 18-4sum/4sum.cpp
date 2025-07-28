#include<set>
#include<vector>

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        set<vector<int>> st;
        int i,j,k,n=nums.size();
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                set<long long> mpp;
                for(k=j+1;k<n;++k)
                {
                    long long sum =nums[i]+nums[j];
                    sum+=nums[k];
                    long long fourth = target-sum;
                    if (mpp.find(fourth) != mpp.end())
                    {
                        vector<int> temp = {nums[i],nums[j],nums[k],(int)(fourth)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    mpp.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};