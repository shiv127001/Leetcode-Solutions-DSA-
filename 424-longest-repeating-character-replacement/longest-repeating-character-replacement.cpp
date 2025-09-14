class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), maxlen = 0, maxf = 0;
        int l = 0;
        int hash[26] = {0};

        for (int r = 0; r < n; r++) {
            if (s[r] < 'A' || s[r] > 'Z') continue;  // ignore non-uppercase

            int idx = s[r] - 'A';
            hash[idx]++;
            maxf = max(maxf, hash[idx]);

            while ((r - l + 1) - maxf > k) {
                int idx2 = s[l] - 'A';
                if (idx2 >= 0 && idx2 < 26) hash[idx2]--;
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;


        // int  n=s.size(),maxlen = 0,maxf=0,changes=0;
        // for(int i=0;i<n;++i)
        // {
        //     int hash[26] = {0};
        //     maxf = 0;
        //     for(int j=i;j<n;++j)
        //     {
        //         hash[s[j]-'A']++;
        //         maxf = max(maxf, hash[s[j]-'A']);
        //         changes = j-i+1 - maxf;
        //         if(changes<=k) maxlen = max(maxlen,j-i+1);
        //         else break;
        //     }
        // }
        // return maxlen;
    }
};