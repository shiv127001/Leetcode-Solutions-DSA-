class Solution {
public:

    // int ncr(int n,int r)
    // {
    //     long long res=1;
    //     for(int i = 0;i<r;++i)
    //     {
    //         res = res*(n-i);
    //         res = res/(i+1);
    //     }
    //     return res;
    // }
    // vector<vector<int>> generate(int numRows) {
    //     if (numRows == 1)
    //     {
    //         vector <vector<int>> container;
    //         vector<int> a(1,1);
    //         container.push_back(a);
    //         return container;
    //     }
    //     vector <vector<int>> container;
    //     container.resize(numRows, vector<int>(numRows, 0));
    //     container[0][0]=1; // [0][0]
    //     container[1][0]=1; // [1][0]
    //     container[1][1]=1; // [1][1]

    //     // container.push_back(vector<int>); // adding row 0
    //     // container.push_back(vector<int>); // adding row 1
    //     // container[0].push_back(1); // [0][0]
    //     // container[1].push_back(1); // [1][0]
    //     // container[1].push_back(1); // [1][1]

    //     for(int i=2; i<numRows ; ++i)
    //     {
    //         for(int j=0 ; j<=i ; ++j)
    //         {
    //             container[i][j] = ncr(i,j);
    //         }
    //     }
    //     return container;
    // }

    vector<vector<int>> generate(int numRows) {
        if (numRows == 1)
        {
            vector <vector<int>> container;
            vector<int> a(1,1);
            container.push_back(a);
            return container;
        }

        int ans=1;
        vector <vector<int>> container;
        vector<int> temp(1,1);
        container.push_back(temp);
        vector<int> temp3(2,1);
        container.push_back(temp3);
        for(int i=2;i<numRows;++i)
        {
            ans = 1;
            vector<int> temp2(i+1,1);
            for(int j=1;j<i;++j)
            {
                ans = ans*(i-j+1);
                ans = ans/j;
                temp2[j] = ans;
            }
            container.push_back(temp2);
        }
        return container;
    }

};