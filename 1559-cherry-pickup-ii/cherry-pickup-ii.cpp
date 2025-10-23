class Solution {
public:

    int f(vector<vector<int>>& matrix,int row,int col,int i,int j1,int j2 ,vector<vector<vector<int>>>&dp)
    {
        if(j1<0 || j1>=col || j2<0 || j2>=col) return -1e9;
        if(i == row-1) 
        {
            if(j1==j2) return matrix[i][j1];
            else return matrix[i][j1] + matrix[i][j2];
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxans = INT_MIN;
        for (int x = -1;x<=1;++x)
        {
            for(int y=-1;y<=1;++y)
            {
                int ans=0;
                if(j1==j2) ans = matrix[i][j1]+ f(matrix,row,col,i+1,j1+x,j2+y,dp);
                else ans = matrix[i][j1]+matrix[i][j2]+ f(matrix,row,col,i+1,j1+x,j2+y,dp);
                maxans = max(maxans,ans);
            }
        }
        return dp[i][j1][j2] = maxans;
    }
    int cherryPickup(vector<vector<int>>& matrix) {
        int row = matrix.size(),col = matrix[0].size();
        int i=0,col1 = 0,col2 = matrix[0].size()-1;
        vector<vector<vector<int>>> dp(row,vector<vector<int>>(col,vector<int>(col,-1)));
        return f(matrix,row,col,i,col1,col2,dp);
    }
};