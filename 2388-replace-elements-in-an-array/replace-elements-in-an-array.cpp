class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int> mpp;
        int n=nums.size(), m=operations.size();
        for(int i=0;i<n;++i) mpp[nums[i]] = i;
        for(int j=0;j<m;++j)
        {
            int oldval = operations[j][0];
            int newval = operations[j][1];
            int indx = mpp[oldval];
            nums[indx] = newval;
            mpp.erase(oldval);
            mpp[newval] = indx;


            // if(mpp.find(operations[j][0])!=mpp.end())
            // {
            //     auto it = mpp.find(operations[j][0]);
            //     nums[it->second] = operations[j][1];
            //     mpp[operations[j][1]] = it->second;
            //     mpp.erase(operations[j][0]);
            // }
        }
        return nums;
    }
};