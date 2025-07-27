#include<iostream>
#include<vector>
#include<set>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;++i)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0) j++;
                if (sum>0) k--;
                if (sum==0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    // ans.push_back(temp);
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                    j++;k--;
                    while(j<k && nums[j]== nums[j-1]) j++;
                    while(j<k && nums[k]== nums[k+1]) k--;
                }
            }
            
        }
        vector<vector<int>> res;
        for(auto it:st)
        {
            res.push_back(it);
        }
        
        return res;
    }
};