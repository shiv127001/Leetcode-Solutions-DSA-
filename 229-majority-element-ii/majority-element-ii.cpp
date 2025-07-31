class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map <int, int> mpp;
        int n = nums.size();
        int i;
        vector<int> res;
        for(i=0;i<n;++i)
        {
            mpp[nums[i]] += 1;
        }
        for(auto it: mpp)
        {
            if(it.second > ceil(n/3))
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};