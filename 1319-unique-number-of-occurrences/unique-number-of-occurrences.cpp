#include<map>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mpp;
        int i=0,n=arr.size();
        for(i=0;i<n;++i)
        {
            mpp[arr[i]] ++;
        }
        set<int> st;
        for(auto [key, value] : mpp)
        {
            if(i==0)
            {
                st.insert(value);
                i++;
                continue;
            }
            if(st.find(value)==st.end())
            {
                st.insert(value);
            }
            else if(st.find(value)!=st.end())
            {
                return false;
            }
        }
        return true;
        
    }
};