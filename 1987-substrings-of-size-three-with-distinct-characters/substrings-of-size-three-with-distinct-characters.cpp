class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        if(n < 3) return 0;
        map<char,int>mpp;
        int l=0,r=0,cnt=0;
        while(r<n)
        {
            mpp[s[r]]++;
            if(r - l + 1 > 3)
            {
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            if(r - l + 1 == 3 && mpp.size() == 3) cnt++;
            r++;
        }
        return cnt;
    }
};