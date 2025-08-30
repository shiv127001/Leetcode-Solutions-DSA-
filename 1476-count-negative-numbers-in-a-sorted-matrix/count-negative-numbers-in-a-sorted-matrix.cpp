class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,m=grid.size(),n=grid[0].size();
        int cnt=0;
        for(i = 0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                if(grid[i][j] <0) cnt++;
            }
        }
        return cnt;
    }
};