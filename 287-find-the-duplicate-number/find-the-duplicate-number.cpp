class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        int n = nums.size();
        for(int i=0;i<n;++i)
        {
            mpp[nums[i]]++;
        }
        int m = mpp.size(),a;
        for(auto it:mpp)
        {
            if(it.second>1) a = it.first;
        }
        return a;
    }
};