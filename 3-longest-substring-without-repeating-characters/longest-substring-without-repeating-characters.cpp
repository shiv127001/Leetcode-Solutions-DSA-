class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,maxlen=0;
        int l=0,r=0,n=s.size();
        map<char , int> mpp;
        while(r<n)
        {
            int len=0;
            if(mpp.find(s[r]) != mpp.end())
            {
                l = max(l,mpp[s[r]]+1);
            }
            mpp[s[r]] = r;
            len = r-l+1;
            r++;
            maxlen = max(len,maxlen);
        }
        return maxlen;
    }
};