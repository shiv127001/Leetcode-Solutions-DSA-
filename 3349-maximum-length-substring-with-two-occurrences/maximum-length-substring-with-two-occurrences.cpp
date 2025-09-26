class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0,n=s.size(),maxlen = 0;
        map<char,int> mpp;
        while(r<n)
        {
            mpp[s[r]] ++;
            
            for (auto &it : mpp) 
            {
                if (it.second > 2) 
                {
                    mpp[s[l]]--;
                    l++;
                }
            }
            int len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};