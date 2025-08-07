class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int cntmain=0,i,j,k,p,n=grid[0].size();
        for(i=0;i<n;++i)
        {
            vector<int> temp;
            for(j=0;j<n;++j)
            {
                temp.push_back(grid[i][j]);
            }
            for(k=0;k<n;++k)
            {
                int cnt=0;
                for(p=0;p<n;++p)
                {
                    if(grid[p][k] != grid[i][p])
                        break;
                    else 
                        cnt++;
                }
                if(cnt==n)
                    cntmain++ ;
            }
        }
        return cntmain;
    }
};