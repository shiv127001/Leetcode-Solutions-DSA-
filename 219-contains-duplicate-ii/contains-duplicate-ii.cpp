class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size(), i,j;
        for(i=0;i<n-1;++i)
        {
            for(j=i+1;j<n;++j)
            {
                if((j-i)<=k && nums[i] == nums[j])
                {
                    return true;
                }
                if((j-i)>k) break;
            }
        }
        return false;
        
    }
};