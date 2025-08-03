#include<unordered_set>
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1,st2;
        unordered_set<int> temp1,temp2;
        int i,n1=nums1.size(),n2 = nums2.size();
        for(i=0;i<n1;++i)
        {
            st1.insert(nums1[i]);
        }
        for(i=0;i<n2;++i)
        {
            st2.insert(nums2[i]);
        }
        for(i=0;i<n1;++i) {
            if(st2.find(nums1[i]) == st2.end())
            {
                temp1.insert(nums1[i]);
            }
        }
        for(i=0;i<n2;++i) {
            if(st1.find(nums2[i]) == st1.end())
            {
                temp2.insert(nums2[i]);
            }
        }
        vector<int> t1,t2;

        for(auto it:temp1)
         {
            t1.push_back(it);
         }
         
        for(auto it:temp2)
         {
            t2.push_back(it);
         }

        vector<vector<int>> answer;
        answer.push_back(t1);
        answer.push_back(t2);
        return answer;
    }
};