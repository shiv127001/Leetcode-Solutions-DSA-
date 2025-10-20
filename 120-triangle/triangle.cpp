class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        // start from the last row
        vector<int> dp = triangle[n - 1];

        // bottom-up: move from second-last row to top
        for (int row = n - 2; row >= 0; row--) {
            for (int col = 0; col < triangle[row].size(); col++) {
                dp[col] = triangle[row][col] + min(dp[col], dp[col + 1]);
            }
        }

        // top element contains the minimum path sum
        return dp[0];
    }

};