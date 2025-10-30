class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long missing,repeating,n = grid.size(),sn=0,s2n=0,sg=0,s2g=0;
        long long num = n*n;
        sn = ((num)*(num+1))/2;
        s2n = ((num)*(num+1)*(2*num+1))/6;
        for(int i=0;i<n;++i) 
        {
            for(int j=0;j<n;++j) 
            {
                sg+=grid[i][j]; 
                s2g= s2g + (long long)grid[i][j] * (long long)grid[i][j];
            }
        }
        long long val1 = s2n-s2g;
        long long val2 = sn-sg;
        val1 = val1/val2;
        missing = (val1+val2)/2;
        repeating = missing-val2;
        // vector<int> ans;
        // ans.push_back(repeating);
        // ans.push_back(missing);
        return {(int)repeating, (int)missing};
    }
};