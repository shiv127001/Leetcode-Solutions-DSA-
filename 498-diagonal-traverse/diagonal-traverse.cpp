class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int i,j,m = mat.size(),n = mat[0].size();
        map<int,vector<int>> mpp;
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                mpp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>res;
        for(int k=0;k<mpp.size();++k)
        {
            if(k%2==0) 
                reverse(mpp[k].begin(),mpp[k].end());
            for(int val: mpp[k]) {
                res.push_back(val);
            }
        }
        return res;
    }
};