class Solution {
public:

    // void setRow(vector<vector<int>>& matrix,int n ,int m, int i)
    // {
    //     int j;
    //     for(j=0;j<m;++j)
    //     {
    //         if(matrix[i][j]!=0)
    //         {
    //             matrix[i][j] =-1212;
    //         }
    //     }
    // }
    // void setCol(vector<vector<int>>& matrix,int n ,int m, int j)
    // {
    //     int i;
    //     for(i=0;i<n;++i)
    //     {
    //         if(matrix[i][j]!=0)
    //         {
    //             matrix[i][j] =-1212;
    //         }
    //     }
    // }

    // void setZeroes(vector<vector<int>>& matrix) {
    //     int i,j;
    //     int n=matrix.size();
    //     int m=matrix[0].size();
    //     for(i=0;i<n;++i)
    //     {
    //         for(j=0;j<m;++j)
    //         {
    //             if(matrix[i][j] == 0)
    //             {
    //                 setRow(matrix,n,m,i);
    //                 setCol(matrix,n,m,j);
    //             }
    //         }
    //     }
    //     for(i=0;i<n;++i)
    //     {
    //         for(j=0;j<m;++j)
    //         {
    //             if(matrix[i][j]==-1212)
    //             {
    //                 matrix[i][j] =0;
    //             }
    //         }
    //     }
    // }

    // // better approach 
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>k(m,0);
        vector<int>p(n,0);
        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                if(matrix[i][j] == 0)
                {
                    k[j]=1;
                    p[i]=1;
                }
            }
        }
        for(int s=0;s<m;++s)
        {
            if(k[s]==1)
            {
                j=s;
                for(i=0;i<n;++i)
                {
                    matrix[i][j] =0;
                }
            }
        }

        for(int r = 0;r<n;++r)
        {
            if(p[r] == 1)
            {
                i=r;
                for(j=0;j<m;++j)
                {
                    matrix[i][j] =0;
                }
            }
        }
    }
};