class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,n=s.size(),m=t.size(),cnt=0;
        int minlen = INT_MAX,st=-1;
        map<char,int> mpp;
        for (char c : t) mpp[c]++;
        while(r<n)
        {
            if(mpp[s[r]] > 0) // pre inserted 
                cnt++;

            mpp[s[r]]--;
            while(cnt == t.size())
            {
                if (r-l+1 < minlen)
                {
                    minlen = r-l+1;
                    st=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]] >0) cnt--;
                l++;
            }
            r++;
        }
        return st==-1 ? "" : s.substr(st, minlen);

    }
};