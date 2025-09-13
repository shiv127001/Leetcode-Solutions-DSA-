class Solution {
public:

    // int numberOfSubstrings(string s) 
    // {
    //     int cnt=0;
    //     int a=-1,b=-1,c=-1,n=s.size();
    //     for(int i=0;i<n;++i)
    //     {
    //         int hash[3] = {0};
    //         for(int j=i;j<n;++j)
    //         {
    //             hash[s[j]-'a'] = 1;
    //             if(hash[0]+hash[1]+hash[2] == 3)
    //             {   cnt = cnt+n-j;
    //                 break;}
    //         }
    //     }
    //     return cnt;
    // }
    int minm(int a,int b,int c)
    {
        int m;
        if(a<b){
            if(a<c) m =  a;
            else m =  c;
        }
        else if(b<c) m = b;
        else m = c;
        return m;
    }

    int numberOfSubstrings(string s) 
    {
        int a=-1,b=-1,c=-1,n=s.size();
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            if(s[i] == 'b') b = i;
            if(s[i] == 'a') a = i;
            if(s[i] == 'c') c = i;
            if(a==-1 || b==-1 || c==-1) continue;
            int starting = minm(a,b,c);
            cnt = cnt + starting+1;
        }
        return cnt;
    }
};