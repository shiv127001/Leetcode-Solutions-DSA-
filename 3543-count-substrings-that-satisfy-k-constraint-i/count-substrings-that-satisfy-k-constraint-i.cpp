class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int i,j,n=s.size(),cnt=0;
        for(i=0;i<n;++i)
        {
            int cnt0=0,cnt1=0;
            for(j=i;j<n;++j)
            {
                if(s[j]=='0') cnt0++;
                if(s[j] =='1') cnt1++;
                int len = j-i+1;
                if(cnt1<=k || cnt0<=k) cnt = cnt+1;
                else break;
            }
        }
        return cnt;
    }
};