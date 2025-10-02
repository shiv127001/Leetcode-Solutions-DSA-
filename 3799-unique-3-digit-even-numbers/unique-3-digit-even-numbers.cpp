class Solution {
public:
    int totalNumbers(vector<int>& digits) 
    {
        int n=digits.size();
        set<int> result;
        vector<int> freq(10,0);
        for (int d : digits) freq[d]++;
        for(int i=100;i<=999;++i)
        {
            if(i%2!=0) continue;
            int num = i;
            vector<int> need(10,0);
            while(num>0)
            {
                need[num%10]++;
                num=num/10;
            }
            bool ans =true;
            for(int d=0;d<10;++d)
            {
                if(need[d] > freq[d]) ans = false;
            }
            if(ans) result.insert(i);
        }
        return result.size();
    }

    // {
    //     int n=digits.size(),cnt=0,j,k;
    //     set<int> result;
    //     for(int i=0;i<n;++i)
    //     {
    //         if(digits[i] %2!=0) cnt++;
    //     }
    //     if(cnt==n) return 0;
    //     map<int,int> mpp;
    //     for(int i=0;i<n;++i)
    //     {
    //         for(j=0;j<n;++j)
    //         {
    //             if(i==j) continue;
    //             for(k=0;k<n;++k)
    //             {
    //                 if(k==i || k==j) continue;
    //                 int d1 = digits[i];
    //                 int d2 = digits[j];
    //                 int d3 = digits[k];
    //                 if(d1==0 || d3%2!=0) continue;
    //                 int dig = 100*d1+10*d2+d3;
    //                 result.insert(dig);
    //             }
    //         }
    //     }
    //     return result.size();
    // }
};