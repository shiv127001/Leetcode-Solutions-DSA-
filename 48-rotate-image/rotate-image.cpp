class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // // 1st method (brute force)
        // vector<vector<int>> array(n, vector<int>(n, 0));
        // int i,j,k;
        // for(i=0;i<n;++i)
        // {
        //     //for(j=n-1;j>=0;--j)
        //     for(j=0;j<n;++j)
        //     {
        //         array[j][n-1-i] = matrix[i][j];
        //     }
        // }
        // for(i=0;i<n;++i)
        // {
        //     for(j=0;j<n;++j)
        //     {
        //         matrix[i][j] = array[i][j];
        //     }
        // }

        int i,j,k;
        for (i = 0;i<n;++i)
        {
            for(j=i;j<n;++j)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for (i = 0;i<n;++i)
        {
            // int p1=0,p2=n-1;
            // while(p1<p2)
            // {    swap(matrix[i][p1],matrix[i][p2]);
            //     p1++;
            //     p2--;
            // }
            for(j=0;j<n/2;++j)
            {
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }
    }
};