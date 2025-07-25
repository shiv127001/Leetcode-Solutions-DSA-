class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,temp,j,sum;
        vector<int> v;

        // METHOD 1(BRUTE FORCE)
        for(i=0;i<nums.size()-1;++i)
        {
            temp = nums[i];
            for(j=i+1;j<nums.size();++j)
            {
                sum = temp+nums[j];
                if(sum == target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;

        // // METHOD 2(OPTIMAL)
        // sort(v.begin(), v.end());
        // i = 0;j = nums.size()-1;
        // while(i<j)
        // {
        //     sum = nums[i] + nums[j];
        //     if(sum == target){
        //         v.push_back(i);
        //         v.push_back(j);
        //         return v;
        //     }
        //     if(sum<target)
        //     {
        //         ++i;
        //     }
        //     if(sum>target)
        //     {
        //         --j;
        //     }
        // }
        // return v;
    }
};